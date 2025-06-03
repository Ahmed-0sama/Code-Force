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
// vector<vector<int>> vis;
// vector<vector<char>>v;
map<pair<int,int>,int>mp;
map<pair<int,int>,int>vis;
bool valid(int x, int y) {
    return mp[{x, y}] == 1 && vis[{x, y}] == 0;
}
vector<pair<int,int>>ans;
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
int bfs(int i,int j,int endx,int endy) {
    queue<pair<pair<int,int>, int>>q;
    q.push({{i,j},1});
    vis[{i,j}]=1;
    while (!q.empty()) {
        pair<int,int>p=q.front().first;
        int dis=q.front().second;
            q.pop();
            for (int d=0;d<8;d++) {
                int nx=p.first+dx[d];
                int ny=p.second+dy[d];
                if (valid(nx,ny)) {
                    if (nx==endx&&ny==endy) {
                        return dis;
                    }
                    vis[{nx,ny}]=1;
                    q.push({{nx,ny},dis+1});
                }
            }
        }
    return -1;
}
signed main() {
    int x0,y0,x1,y1;
    cin>>x0>>y0>>x1>>y1;
    int x;cin>>x;
    for (int i=0;i<x;i++) {
        int r,u,v;cin>>r>>u>>v;
        for (int j=u;j<=v;j++) {
            mp[{r,j}]=1;
            vis[{r,j}]=0;
        }
    }
    if (mp[{x0, y0}] != 1 || mp[{x1, y1}] != 1) {
        cout << -1;
        return 0;
    }
    cout<<bfs(x0,y0,x1,y1);
}