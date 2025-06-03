#include <iostream>
#include <bits/stdc++.h>
 using namespace std;
//#define int long long
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

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

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
//string ans="";
string dir="";
// const int N=1e4;
// vector<int> color;
const int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
int n,m;
string path;
vector<vector<int>>adj;
// vector<vector<char>> v(8, vector<char>(8, '.'));
vector<int> vis;
// vector<vector<char>>v;
// bool valid(int i, int j) {
//     return i>=0&&j>=0&&i<n&&j<m&&!vis[i][j];
// }
vector<int>dis;
vector<pair<int,int>>ans;
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
void bfs(int src) {
    queue<int>q;
    vis[src]=1;
    q.push(src);
    dis[src]=0;
    while (!q.empty()) {
        int node=q.front();
        q.pop();
        for (auto child:adj[node]) {
            if (!vis[child]&&dis[child]==-1) {
                vis[child]=1;
                dis[child]=dis[node]+6;
                q.push(child);
            }
        }
    }
    return;
}
signed main() {
    int t;cin>>t;
    while (t--) {
        cin>>n>>m;
        adj.assign(n + 1, vector<int>());
        vis.assign(n + 1, 0);
        dis.assign(n + 1, -1);
        for (int i=0;i<m;i++) {
            int u,v;cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int x;cin>>x;
        bfs(x);
        for (int i=1;i<=n;i++) {
            if (i==x) {
                continue;
            }
            cout<<dis[i]<<' ';
        }
        cout<<endl;
    }
}