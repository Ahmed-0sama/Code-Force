#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
int optimal(int n){
    vector<int>v(n),index(n+1,-1);
    for (int i = 0;i<n ; ++i) {
        cin>>v[i];
    }
    int mn=INT_MAX;
    for (int i = 0; i <n ; ++i) {
        if(index[v[i]]!=-1){
            mn=min(mn,index[v[i]]);
        }
    }
}
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<int,int>>v(n+1);
        for (int i = 1; i <=n ; ++i) {
            cin>>v[i].first;
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        int ans=INT_MAX;
        for (int i = 1; i <n ; ++i) {
            if(v[i].first==v[i+1].first){
                ans=min(ans,abs(v[i].second-v[i+1].second)+1);
            }
        }
        ans==INT_MAX?cout<<"-1"<<endl:cout<<ans<<endl;
    }
}