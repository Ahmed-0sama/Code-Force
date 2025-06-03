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
const int dx[] = {0, 1};
const int dy[] = {1, 0};
int n,m;
//vector<vector<int>> adj;
string path;
int MOD=998244353;
vector<vector<int>> v;
vector<vector<bool>> vis;
bool valid(int i, int j) {
    return (i >= 0 && i < m && j >= 0 && j < n && v[i][j]!=1);
}
//bitset<N+1>is_Prime;
//vector<int>primes;
//int d[N]={0};
int dp[N][N];
int solve(int i,int j,int n,int m) {
    if (i==n-1&&j==m-1)return 1;
    if (dp[i][j]!=-1)return dp[i][j];
    int mx=0;
    for (int x=0;x<2;x++) {
        int ni=i+dx[x],nj=j+dy[x];
        if (valid(ni,nj)) {
            mx+=solve(ni,nj,n,m);
        }
    }
    return dp[i][j]=mx;
}
signed main() {
    cin>>n>>m;
    memset(dp,-1,sizeof dp);
    v.resize(n,vector<int>(m));
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>v[i][j];
        }
    }
    cout<<solve(0,0,n,m)<<endl;
}