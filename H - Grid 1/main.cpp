#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N=1e4;
int MOD=1e9+7;
int dp[N][N];
int n,m;
vector<vector<char>> v;

int solve(int i,int j){
    if(i==n-1&&j==m-1)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    if(v[i][j]=='#')return 0;
    int result = 0;
    if(i+1<n) result+=solve(i+1,j);
    if(j+1<m) result+=solve(i,j+1);
    return dp[i][j]=result%MOD;
}
bool preceed(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second) return a.first>b.first;
    return a.second>b.second;
}

signed main() {
    cin>>n>>m;
    memset(dp,-1,sizeof dp);
    v.resize(n,vector<char>(m));
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            cin>>v[i][j];
        }
    }
    cout<<solve(0,0)<<endl;
}