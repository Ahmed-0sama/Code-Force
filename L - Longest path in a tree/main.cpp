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
string ans="";
string dir="";
const int N=1e6;
int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, -1, 1 };
int n,m;
vector<vector<int>> adj;
string path;
int MOD=1073741824;
vector<vector<int>> graph;
vector<int> vis(N,-1);
// map<pair<int,int>,int>mp;
// map<pair<int,int>,int>viss;
// bool valid(int i, int j) {
//     return (i >= 0 && j >= 0&&viss.count({i, j}) && viss[{i, j}] == -1);
// }
int dfs(int node, int& diameter) {
    vis[node] = 1;
    int longest1 = 0, longest2 = 0;
    for (int child : adj[node]) {
        if (!vis[child]) {
            int child_longest = dfs(child, diameter);
            if (child_longest > longest1) {
                longest2 = longest1;
                longest1 = child_longest;
            } else if (child_longest > longest2) {
                longest2 = child_longest;
            }
        }
    }
    diameter = max(diameter, longest1 + longest2);
    return longest1 + 1;
}
signed main() {
    cin>>n;
    adj.resize(N);
    vis.assign(N, 0);
    for (int i=0;i<n-1;i++) {
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int diameter = 0;
    dfs(1, diameter);
    cout << diameter << endl;
}