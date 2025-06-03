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
vector<int> color;
const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

int n,m;
vector<vector<int>> adj;
string path;
vector<vector<char>> v(8, vector<char>(8, '.'));
vector<int> vis;
// bool valid(int i, int j) {
//     return (i >= 0 && i < 8 && j >= 0 && j < 8 && !vis[i][j]);
// }
const int MAX_N = 1e7 + 5;
vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
bool dfs(int node,int c) {
    color[node]=c;
    for (auto neig:adj[node]) {
        if (color[neig]==-1) {
            if (!dfs(neig,1-c)) {
                return false;
            }
        }
        else if (color[neig]==color[node]) {
            return false;//same colour on both side
        }
    }
    return true;
}
bool isBipartite() {
    for (int i=0;i<n;i++) {
        if (color[i]==-1) {
            if (!dfs(i,0)) {
                return false;
            }
        }
    }
    return true;
}
signed main() {
    int t;cin>>t;
    for (int j=1;j<=t;j++) {
        cin>>n>>m;
        adj.clear();
        color.clear();
        adj.resize(n+1);
        color.resize(n+1,-1);
        for (int i=0;i<m;i++) {
            int u,v;cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout<<"Scenario #"<<j<<":"<<endl;
        isBipartite()?cout<<"No suspicious bugs found!"<<endl:cout<<"Suspicious bugs found!"<<endl;
    }
}