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
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
int n,m;
//vector<vector<int>> adj;
string path;
int MOD=998244353;
vector<vector<char>> v(2, vector<char>(N));
vector<vector<bool>> vis(2, vector<bool>(N));
bool valid(int i, int j) {
    return (i >= 0 && i < 2 && j >= 0 && j < n && !vis[i][j] && v[i][j] != '#');
}
//bitset<N+1>is_Prime;
//vector<int>primes;
//int d[N]={0};
//int dp[N][N];
bool dfs(int i,int j,int n) {
    if (i == 1 && j == n - 1) return true;
    vis[i][j]=true;
    for (int d = 0; d < 4; ++d) {
        int ni = i + dx[d];
        int nj = j + dy[d];
        if (valid(ni,nj)) {
            if (v[ni][nj] == '>') nj++;
            else if (v[ni][nj] == '<') nj--;
            if (valid(ni,nj)) {
                if (dfs(ni, nj,n)) return true;
            }
        }
    }
    return false;
}
signed main() {
    int t;cin>>t;
    while (t--) {
        cin>>n;
        v.assign(2, vector<char>(n));
        vis.assign(2, vector<bool>(n, false));
        for (int i=0;i<2;i++) {
            for (int j=0;j<n;j++) {
                cin>>v[i][j];
            }
        }
        if (valid(0, 0) && dfs(0, 0, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}