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
int n,m,sx,ex,sy,ey;
int ans=0;
string v="";
string dir="RLDU";
const int N=1e5+5;
vector<int> color(N, 0);
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
vector<int>adj[N];
int vistCount[N];
int cat[N];
bool vis[N];

bool valid(int x,int y) {
    return x < n && x >= 0 && y >= 0 && y < m;
}
int bfs(int start,int end) {
    queue<pair<int,int>>q;
    q.push({start,0});
    while (!q.empty()) {
        pair<int,int>p=q.front();
        q.pop();
        int node=p.first,cost=p.second;
        vis[node]=1;
        if (node==end)return cost;
        for (auto it:adj[node]) {
            if (!vis[it]) {
                q.push({it,cost+1});
            }
        }
    }
}
signed main() {
    cin>>n>>m;
    for (int i=0;i<m;i++) {
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout<<bfs(1,5);
}