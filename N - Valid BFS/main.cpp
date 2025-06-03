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
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n,m;
string path;
vector<vector<int>>adj;
// vector<vector<char>> v(8, vector<char>(8, '.'));
vector<int> vis;
// vector<vector<char>>v;
// bool valid(int i, int j) {
//     return i>=0&&j>=0&&i<n&&j<m&&!vis[i][j];
// }
vector<int>color;
vector<int>dis;
vector<int> pos;
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
vector<int>ans;
bool bfs() {
    vector<int> order;
    vector<int> vis(n+1, 0);
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        order.push_back(u);
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = 1;
                q.push(v);
            }
        }
    }
    if (order.size() != n) return false;
    for (int i = 0; i < n; i++) {
        if (order[i] != ans[i]) return false;
    }
    return true;
}
signed main() {
    cin >> n;
    adj.resize(n+1);
    ans.resize(n);
    pos.resize(n+1);
    for (int i = 0; i < n - 1; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
        pos[ans[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end(), [&](int a, int b) {
     return pos[a] < pos[b];
 });
    }
    cout << (bfs() ? "YES" : "NO") << "\n";
    return 0;
}
