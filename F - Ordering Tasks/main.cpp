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
const int N=1e4;
vector<int> color(N, 0);
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
int m;
vector<int> vis;
// vector<vector<int>> adj;
string path;
vector<vector<char>> v;
bool preceed(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}
void topologicalSort(int n,vector<vector<int>>&adj) {
    vector<int>in(n+1,0);
    for (int i=1;i<=n;i++) {
        for (auto v:adj[i]) {
            in[v]++;
        }
    }
    priority_queue<int,vector<int>,greater<int>>pq;
    for (int i=1;i<=n;i++) {
        if (in[i]==0) {
            pq.push(i);
        }
    }
    vector<int>order;
    while (!pq.empty()) {
        int u=pq.top();
        pq.pop();
        order.push_back(u);
        for (auto i:adj[u]) {
            in[i]--;
            if (in[i]==0) {
                pq.push(i);
            }
        }
    }
        for (int i=0;i<order.size();i++) {
            if (i>0)cout<<" ";
            cout<<order[i];
        }
    cout<<endl;
}

signed main() {
    fastread();
    while (true) {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
        }
        topologicalSort(n, adj);
    }
}