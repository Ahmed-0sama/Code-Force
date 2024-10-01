#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1000;
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int x,y;cin>>x>>y;
        int ans=0;
        while(n > 0){
            int me = min(y, n);
            n -= me;
           int blend = min(x, me);
            ans++;
        }
        cout<<ans<<endl;
    }

}