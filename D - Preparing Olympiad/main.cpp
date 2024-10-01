#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    int ans=0;
    for (int mask = 0; mask <(1<<n) ; ++mask) {
        int sum=0;
        int mn=INT_MAX;
        int mx=INT_MIN;
        int count=0;
        for (int i = 0; i <n ; ++i) {
            if((mask>>i)&1){
                    sum+=v[i];
                    count++;
                    mn=min(mn,v[i]);
                    mx=max(mx,v[i]);
            }
        }
        if(count>=2&&sum>=l&&sum<=r&&(mx-mn)>=x){
            ans++;
        }
    }
    cout<<ans<<endl;
}