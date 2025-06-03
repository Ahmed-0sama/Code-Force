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
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
int n,m;
string path;
vector<vector<int>>adj;
// vector<vector<char>> v(8, vector<char>(8, '.'));
vector<vector<int>> vis;
bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j]);
}
vector<pair<int,int>>ans;
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
void bfs(queue<pair<int,int>>&q) {
    pair<int,int>last;
    while (!q.empty()) {
        int sz=q.size();
        for (int k=0;k<sz;k++) {
            pair<int, int> p = q.front();
            q.pop();
            if (vis[p.first][p.second]) continue;
            last = p;
            vis[p.first][p.second] = 1;
            for (int d=0;d<4;d++) {
                int nx=p.first+dx[d];
                int ny=p.second+dy[d];
                if (valid(nx,ny)) {
                    q.push({nx,ny});
                }
            }
        }
    }
    cout << last.first + 1 << " " << last.second + 1 << endl;
}
signed main() {
    fastread();
    fileIO();
    cin >> n >> m;
    int x; cin >> x;
    vis.assign(n, vector<int>(m, 0));
    queue<pair<int,int>>q;
    for (int i = 0; i < x; ++i) {
        int k, l; cin >> k >> l;
        --k, --l;
        if (k >= 0 && k < n && l >= 0 && l < m) {
            q.push({k, l});
        }
    }
    bfs(q);
    The_end;
}