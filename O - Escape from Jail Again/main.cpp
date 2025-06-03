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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n,m;
string path;
vector<vector<int>>adj;
// vector<vector<char>> v(8, vector<char>(8, '.'));
vector<vector<vector<int>>> vis;
// vector<vector<char>>v;
vector<vector<char>>grid;
bool valid(int i, int j, bool flag) {
    return i >= 0 && j >= 0 && i < n && j < m && !vis[i][j][flag] && grid[i][j] != 'W';
}
vector<int>color;
vector<int>dis;
vector<int> pos;
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
vector<int>ans;
int bfs(int i, int j) {
    vis[i][j][0] = 1;
    queue<tuple<int, int, bool, int>> q;
    q.push({i, j, false, 0});

    while (!q.empty()) {
        auto [x, y, flag, dist] = q.front();
        q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            // Escape check: if next step is outside grid and current cell is not a wall
            if ((nx < 0 || ny < 0 || nx >= n || ny >= m) && grid[x][y] != 'W') {
                return dist + 1;
            }

            if (!valid(nx, ny, flag)) continue;

            if (grid[nx][ny] == '.' || (grid[nx][ny] == 'D' && flag)) {
                vis[nx][ny][flag] = 1;
                q.push({nx, ny, flag, dist + 1});
            }
            else if (grid[nx][ny] == 'O' || grid[nx][ny] == 'C') {
                bool new_flag = flag;
                if (grid[nx][ny] == 'O') new_flag = true;
                else if (grid[nx][ny] == 'C') new_flag = false;
                if (!vis[nx][ny][new_flag]) {
                    vis[nx][ny][new_flag] = 1;
                    q.push({nx, ny, new_flag, dist + 1});
                }
            }
        }
    }
    return -1;
}
signed main() {
    while (cin >> n >> m) {
        if (n == -1 && m == -1) {
            break;
        }
        grid.assign(n, vector<char>(m));
        vis.assign(n, vector<vector<int>>(m, vector<int>(2, 0)));
        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;
            for (int j = 0; j < m; j++) {
                grid[i][j] = row[j];
                if (grid[i][j] == 'H') {
                    sx = i;
                    sy = j;
                }
            }
        }
        cout<<bfs(sx,sy)<<endl;
    }
}
