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
//     return (i >= 0 && i < 8 && j >= 0 && j < 8 && !vis[i][j]); // Corrected order
// }
int bfs(int i,int col) {
    queue<int>q;
    int cnt=0;
    q.push(i);
    vis[i]=1;
    while (!q.empty()) {
        int p=q.front();
        q.pop();
        for (auto j:adj[p]) {
            if (!vis[j]){
                if (color[j]==col)return cnt;
                vis[j]=1;
                cnt++;
                q.push(j);
            }
        }
    }
    return -1;
}
signed main() {
    cin>>n>>m;
    adj.resize(n + 1);
    vis.resize(n + 1, 0);
    color.resize(n + 1);
    for (int i=0;i<m;i++) {
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i=1;i<=n;i++) {
        cin>>color[i];
    }
    int x;cin>>x;

    vector<int> colorNodes;
    for (int i = 1; i <= n; i++) {
        if (color[i] == x) {
            colorNodes.push_back(i);
        }
    }
    if (colorNodes.size() < 2) {
        cout << -1 << endl;
        return 0;
    }
    for (int i=1;i<=n;i++) {
        if (color[i]==x) {
            cout<<bfs(i,x)<<endl;
            break;
        }
    }
}