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
bool valid(int x, int y, int n, int m, const vector<string>& grid, vector<vector<bool>>& vis) {
    return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && grid[x][y] == '1';
}
vector<pair<int,int>>ans;
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
int bfs(int i,int j,const vector<string>& grid, vector<vector<bool>>& vis) {
    vis[i][j]=1;
    int cnt=1;
    queue<pair<int,int>>q;
    n = grid.size(), m = grid[0].size();
    q.push({i,j});
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (int d = 0; d < 8; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (valid(nx, ny, n, m, grid, vis)) {
                vis[nx][ny] = true;
                q.push({nx, ny});
                cnt++;
            }
        }
    }
    return cnt;
}
signed main() {
    string line;
    getline(cin, line);
    int T = stoi(line);
    getline(cin, line);
    while (T--) {
        vector<string> grid;
        while (getline(cin, line)) {
            if (line.empty()) break;
            grid.push_back(line);
        }

        int rows = grid.size();
        if (rows == 0) {
            cout << 0 << "\n";
            if (T) cout << "\n";
            continue;
        }
        int cols = grid[0].size();
        vector<vector<bool>> vis(rows, vector<bool>(cols, false));
       int mx=0;
        for (int i=0;i<rows;i++) {
            for (int j=0;j<cols;j++) {
                if (!vis[i][j]&&grid[i][j]=='1') {
                    mx=max(mx,bfs(i,j,grid,vis));
                }
            }
        }
        cout << mx;
        if (T) cout << "\n";
        cout << "\n";
    }
}