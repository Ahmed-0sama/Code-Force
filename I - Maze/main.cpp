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
vector<vector<int>> vis;
// vector<vector<char>>v;
bool valid(int i, int j) {
    return i>=0&&j>=0&&i<n&&j<m&&!vis[i][j];
}
vector<int>dis;
vector<pair<int,int>>ans;
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
void bfs(int i,int j,int&reminder,vector<vector<char>>&grid) {
    vis[i][j]=1;
    queue<pair<int,int>>q;
    q.push({i,j});
    reminder--;
    while (!q.empty()) {
        pair<int,int>p=q.front();
        q.pop();
        for (int d=0;d<4;d++) {
            int nx=p.first+dx[d];
            int ny=p.second+dy[d];
            if (valid(nx,ny)&&grid[nx][ny]=='.') {
                vis[nx][ny]=1;
                reminder--;
                q.push({nx,ny});
            }
            if (reminder==0)return;
        }
    }
}
signed main() {
    int x;
    cin>>n>>m>>x;
    vector<vector<char>>grid(n,vector<char>(m));
    vis.assign(n, vector<int>(m, 0));
    int total_dots = 0;
    pair<int, int> start = {-1, -1};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == '.') {
                if (start.first == -1) start = {i, j};
                total_dots++;
            }
        }
    }
    int ce = total_dots - x;
    if (ce > 0) {
        bfs(start.first, start.second, ce, grid);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                grid[i][j] = 'X';
            }
            cout << grid[i][j];
        }
        cout << '\n';
    }
}