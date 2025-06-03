#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define The_end return 0
#define endl "\n"
//const int MOD = 1e9 + 7;
//*=========================>>>Fast-IO-Functions<<<=================
void fastread()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
//*=========================>>>File-IO-Functions<<<=================
void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//*=========================>>>Main-Code<<<=======================
int sx,ex,sy,ey;
int spath=0;
string ans="";
string dir="";
const int N=1e4;
//vector<int> color;
const int dx[] = {0, 1,-1,0};
const int dy[] = {1, 0,0,-1};
int n,m;
//vector<vector<int>> adj;
string path;
int MOD=998244353;
vector<vector<char>> v;
vector<vector<bool>> vis;
bool valid(int i, int j) {
    return (i >= 0 && i < m && j >= 0 && j < n&& !vis[i][j]);
}
//bitset<N+1>is_Prime;
//vector<int>primes;
//int d[N]={0};
int dp[N][N];
int dfs(int i,int j,vector<vector<int>>&grid,int n,int m) {
    vis[i][j]=true;
    if (i==n-1&& j==m-1)return 1;
    if (dp[i][j]!=-1)return dp[i][j];
    int mn=INT_MAX;
    for (int x=0;x<4;x++) {
        int ni=i+dx[x],nj=j+dy[x];
        if (valid(ni,nj)) {
            mn=min(mn,dfs(ni,nj,grid,n,m)+grid[ni][j]);
        }
    }
    return dp[i][j]=mn;
}
signed main() {
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    vis.resize(m, vector<bool>(n, false));
    cout << dfs(0, 0, grid, m, n) << endl;
}