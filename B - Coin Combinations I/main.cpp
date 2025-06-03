#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N=1e4;
int MOD=1e9+7;
int dp[N][N];
int n,weight;
vector<vector<int>>v(n);
int solve(int i,int w){
    if(i==n)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    if(w>weight)return 0;
    int res=solve(i+1,w);
    if(w+v[i][0]<=weight){
        res=max(res, solve(i+1,w+v[i][0])+v[i][1]);
    }
    return dp[i][w]=res;
}
signed main(){
    fastread();
    cin>>n>>weight;
    v.resize(n,vector<int>(n));
    memset(dp,-1,sizeof dp);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i][0]>>v[i][1];
    }
    cout<<solve(0,0)<<endl;
}