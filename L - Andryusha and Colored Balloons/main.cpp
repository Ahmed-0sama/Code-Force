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
vector<int>ans;
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
void bfs(int i) {
    vis[i]=1;
    color[i]=1;
    queue<pair<int,int>>q;
    int mx=1;
    q.push({i,-1});
    while (!q.empty()) {
        auto [u, par] = q.front();
        q.pop();
        int curr = 1;
        for (auto j:adj[u]) {
            if (!vis[j]) {
                vis[j]=1;
                while(curr==color[u]||(par != -1 && curr == color[par])){
                    curr++;
                    }
                color[j]=curr++;
                q.push({j,u});
            }
        }
    }
}
signed main() {
    cin>>n;
    vis.assign(n+1,0);
    adj.resize(n+1,{});
    color.resize(n+1,0);
    for (int i=1;i<n;i++) {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i=1;i<n;i++) {
        if (!vis[i]) {
            bfs(i);
        }
    }
    int mx=*max_element(color.begin(),color.end());
    cout<<mx<<endl;
    for (int i=1;i<=n;i++) {
        cout<<color[i]<<" ";
    }
}
