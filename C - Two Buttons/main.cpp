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
// const int N=1e4;
// vector<int> color;
// const int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
// const int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};
int n,m;
string path;
vector<vector<int>>adj;
// vector<vector<char>> v(8, vector<char>(8, '.'));
vector<int> vis;
// bool valid(int i, int j) {
//     return (i >= 0 && i < 8 && j >= 0 && j < 8 && !vis[i][j]);
// }
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
int bfs(int n,int m) {
    queue<int>q;
    q.push(n);
    vis[n]=1;
    int cost=0;
    while (!q.empty()) {
        int size=q.size();
        cost++;
        for (int i=0;i<size;i++) {
            int x=q.front();
            q.pop();
            int nx=x*2;
            int ny=x-1;
            if (nx < vis.size() && !vis[nx]) {
                if (nx == m) return cost;
                vis[nx] = 1;
                q.push(nx);
            }

            if (ny > 0 && !vis[ny]) {
                if (ny == m) return cost;
                vis[ny] = 1;
                q.push(ny);
            }
        }
    }
    return -1; // just in case
}
signed main() {
    cin>>n>>m;
    vis.resize(2 * max(n, m) + 10, 0);
    if (n >= m) {
        cout << n - m << endl;
    } else {
        cout << bfs(n, m) << endl;
    }
}