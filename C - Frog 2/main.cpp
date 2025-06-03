#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N=1e6;
int k;
int MOD=1e9+7;
int dp[N];
int n;
vector<int>v(n);
int solve(int i){
    if(i==n-1)return 0;
    if(dp[i]!=-1)return dp[i];
    int res=solve(i+1)+abs(v[i]-v[i+1]);
    for (int j =1; j <=k ; ++j) {
        if(i+j<n){
            res=min(res,solve(i+j)+abs(v[i]-v[i+j]));
        }
    }
    return dp[i]=res;
}

signed main(){
    cin>>n>>k;
    memset(dp,-1,sizeof dp);
    v.resize(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    cout<<solve(0)<<endl;
}