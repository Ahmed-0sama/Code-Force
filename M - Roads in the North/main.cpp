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
const int N=10005;
int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, -1, 1 };
int n,m;
vector<pair<int, int>> adj[N];
int vis[N];
string path;
int MOD=1073741824;
vector<vector<int>> graph;
// map<pair<int,int>,int>mp;
// map<pair<int,int>,int>viss;
// bool valid(int i, int j) {
//     return (i >= 0 && j >= 0&&viss.count({i, j}) && viss[{i, j}] == -1);
// }
pair<int,int> bfs(int i) {
    memset(vis, 0, sizeof(vis));
    vis[i]=1;
    queue<pair<int,int>>q;
    q.push({i,0});
    pair<int,int>farthest={i,0};
    while (!q.empty()) {
        pair<int,int>p=q.front();
        int dis=p.second;
        q.pop();
        farthest={p.first,dis};
        for (auto j:adj[p.first]) {
            if (!vis[j.first]) {
                vis[j.first]=1;
                q.push({j.first,dis+j.second});
            }
        }
    }
    return farthest;
}

signed main() {
    string line;
    vector<tuple<int, int, int>> edges;
    set<int> nodes;

    while (getline(cin, line)) {
        if (line.empty()) {
            if (edges.empty()) continue;

            for (int node : nodes) adj[node].clear();
            nodes.clear();

            int start = -1;
            for (auto [u, v, w] : edges) {
                adj[u].push_back({v, w});
                adj[v].push_back({u, w});
                nodes.insert(u);
                nodes.insert(v);
                start = u;
            }

            pair<int, int> p = bfs(start);
            pair<int, int> farthest = bfs(p.first);
            cout << farthest.second << endl;
            edges.clear();
        } else {
            stringstream ss(line);
            int u, v, w;
            ss >> u >> v >> w;
            edges.emplace_back(u, v, w);
            nodes.insert(u);
            nodes.insert(v);
        }
    }
    if (!edges.empty()) {
        for (int node : nodes) adj[node].clear();
        nodes.clear();
        for (auto [u, v, w] : edges) {
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
            nodes.insert(u);
            nodes.insert(v);
        }
        pair<int, int> p = bfs(1);
        pair<int, int> farthest = bfs(p.first);
        cout << farthest.second << endl;
    }
}