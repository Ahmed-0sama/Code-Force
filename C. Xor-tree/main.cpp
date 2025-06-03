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
const int N=1e4;
vector<int> color;
const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int n,m;
string path;
vector<vector<int>>adj;
 vector<vector<char>> v(8, vector<char>(8, '.'));
 vector<int> vis;
 // bool valid(int i, int j) {
 //     return (i >= 0 && i < 8 && j >= 0 && j < 8 && !vis[i][j]);
 // }
 //vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
vector<int>ans;
void dfs(int i,int depth,int flipeven,int flipodd,vector<int>&curr,vector<int>&req) {
    vis[i]=1;
    int flip = (depth % 2 == 0) ? flipeven : flipodd;
    if ((curr[i] ^ flip) != req[i]) {
        ans.push_back(i);
        if (depth % 2 == 0) flipeven ^= 1;
        else flipodd ^= 1;
    }
    for (auto j:adj[i]) {
        if (!vis[j]) {
            dfs(j, depth + 1, flipeven, flipodd, curr, req);
        }
    }
}

signed main() {
    cin>>n;
    adj.resize(n+1);
    vis.resize(n+1,0);
    for (int i=0;i<n-1;i++) {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>curr(n+1);
    for (int i=1;i<=n;i++) {
        cin>>curr[i];
    }
    vector<int>req(n+1);
    for (int i=1;i<=n;i++) {
        cin>>req[i];
    }
    dfs(1, 0, 0, 0, curr, req);
    cout<<ans.size()<<endl;
    for (auto i:ans) {
        cout<<i<<endl;
    }
}