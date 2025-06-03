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
const int dx[] = {0, 1,0,-1};
const int dy[] = {1, 0,-1,0};
int n,m;
//vector<vector<int>> adj;
string path;
int MOD=998244353;
vector<vector<char>> v;
vector<vector<bool>> vis;
bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j]);
}
//bitset<N+1>is_Prime;
//vector<int>primes;
//int d[N]={0};
vector<vector<vector<int>>> dp;
int dfs(int i,int j,string &s,int t) {
    if (t==s.size())return 0;
    if (dp[i][j][t] != -1) return dp[i][j][t];
    vis[i][j]=true;
    int mx=0;
    for (int x=0;x<4;x++) {
        int ni=i+dx[x],nj=j+dy[x];
        if (valid(ni,nj)) {
            if (s[t]==v[ni][nj]) {
                mx=max(mx,dfs(ni,nj,s,t+1)+1);
            }
        }
    }
    dp[i][j][t] = mx;
    vis[i][j]=false;
    return  mx;
}
signed main() {
    string s;cin>>s;
    cin>>n>>m;
    dp.resize(n, vector<vector<int>>(m, vector<int>(s.size(), -1)));
    v.resize(n,vector<char>(m));
    vis.resize(n,vector<bool>(m));
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>v[i][j];
        }
    }
    int mx=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (v[i][j] == s[0]) {
                vis.assign(n, vector<bool>(m, false)); // reset vis
                int x=dfs(i, j, s, 1);
                mx = max(mx, x + 1);
            }
        }
    }
    cout<<mx<<endl;
    cout << (mx ==s.size()? "true" : "false") << endl;
}