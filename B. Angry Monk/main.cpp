#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(k);
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        for (int i = 0; i <a.size()-1 ; ++i) {
        if (a[i]==1){
            ans++;
        }
        else{
            ans+=a[i]*2-1;
         }
        }
        cout<<ans<<endl;
    }
}