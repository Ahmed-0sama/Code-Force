#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// #define int long long
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
//*=========================>>>Utility-Templates<<<=================
template <typename T> T GCD(T vec, T b) { return (b == 0 ? vec : GCD(b, vec % b)); }
template <typename T> T LCM(T vec, T b) { return (vec / GCD(vec, b) * b); }
template <typename T> T factorial(T n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
template <typename T> T fibonacci(T n) { return n <= 1 ? n : fibonacci(n - 1) + fibonacci(n - 2); }
template <typename T> T maxthree(T vec, T b, T c) { return max(vec, max(b, c)); }
template <typename T> T minthree(T vec, T b, T c) { return min(vec, min(b, c)); }
template <typename T> T maxfour(T vec, T b, T c, T d) { return max(max(vec, b), max(c, d)); }
template <typename T> T minfour(T vec, T b, T c, T d) { return min(min(vec, b), min(c, d)); }
//*=========================>>>Main-Code<<<=======================
int sx,ex,sy,ey;
int spath=0;
string ans="";
string dir="";
const int N=1e4;
vector<int> color(N, 0);
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
int n,m;
vector<int> vis;
vector<vector<int>> adj;
string path;
vector<vector<char>> v;
// bool valid(int x,int y) {
//     return (x >= 0 && y >= 0 && x < n && y < m) && (s[x][y] == '.' || s[x][y] == 'B');
// }
void dfs(int i,bool &bipartite) {
    for (auto j:adj[i]) {
        if (vis[j]==-1) {
            vis[j]=1-vis[i];
            dfs(j,bipartite);
        }
        else if (vis[j]==vis[i])bipartite=false;
    }
}
signed main() {
    cin>>n>>m;
    vis.resize(n + 1, -1);
    adj.resize(n + 1);
    for (int i=0;i<m;i++) {
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int bench=0;
    for (int i=1;i<=n;i++) {
        if (vis[i]==-1) {
            vis[i] = 0;
            bool bipartite=true;
            dfs(i,bipartite);
            if (!bipartite)bench++;
        }
    }
    if ((n - bench) % 2 == 1) bench++;
    cout<<bench<<endl;
}