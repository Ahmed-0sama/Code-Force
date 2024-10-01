#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
bool check(int x,vector<int>&v,int c){
    int mplaced=1,lastpos=v[0];
    for (int i = 0; i <v.size() ; ++i) {
        if(v[i]-lastpos>=x){
            if(++mplaced==c) {
                return true;
            }
            lastpos = v[i];
        }
    }
    return false;
}
signed main() {
    fastread();
    int t;cin>>t;
    while(t--){
        int n,c;cin>>n>>c;
        int ans;
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int low=0,high=1e9;
        while(low<=high){
          int mid=(high+low)/2;
          if(check(mid,v,c)){
              low=mid+1;
              ans=mid;
          }
          else{
              high=mid-1;
          }
        }
        cout<<ans<<endl;
    }
}