#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
typedef long long  ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    int t;
    cin>>t;
    while(t--){
        vector<ll>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll ans=0;
        for(int i=0;i<n;i++){
           ans =max(ans,v[i]*(n-i));
        }
        cout<<ans<<endl;
    }
    return 0;
}
