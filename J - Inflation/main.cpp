#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<int>ing(3),cost(3);
map<char,int>mp;
int p;
bool solve(int m){
    int ans=0;
    ans+=max(0ll,((mp['B']*m)-ing[0])*cost[0]);
    ans+=max(0ll,((mp['S']*m)-ing[1])*cost[1]);
    ans+=max(0ll,((mp['C']*m)-ing[2])*cost[2]);
    return ans<=p;
}
signed  main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        int sum=vec[0],anss=0;
        for(int i=1;i<n;i++){
            int l=0,r=1e11+5,ans=0;
            while(l<=r){
                int m=(l+r)/2;
                if(vec[i]*100<=k*(sum+m)){
                    r=m-1;
                    ans=m;
                }
                else l=m+1;
            }
            sum+=vec[i];
            sum+=ans;
            anss+=ans;
        }
        cout<<anss<<'\n';
    }
    return 0;
}