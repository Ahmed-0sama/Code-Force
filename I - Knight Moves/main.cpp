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
vector<int> color(N, 0);
const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

int m;
vector<vector<char>> adj;
string path;
vector<vector<char>> v(8, vector<char>(8, '.'));
vector<vector<int>> vis(8, vector<int>(8, 0));
bool valid(int i, int j) {
    return (i >= 0 && i < 8 && j >= 0 && j < 8 && !vis[i][j]); // Corrected order
}
int  bfs(int x,int y) {
    if (v[x][y] == '#') return 0;
    int cost=0;
    queue<pair<int,int>>q;
    q.push({x,y});
    vis.assign(8, vector<int>(8, 0));
    vis[x][y] = 1;
    while (!q.empty()) {
        int sz=q.size();
        cost++;
        for (int i=0;i<sz;i++) {
            pair<int,int>p=q.front();
            q.pop();
            for (int d=0;d<8;d++) {
                int nx = p.first + dx[d], ny = p.second + dy[d];
                if (valid(nx, ny)) {
                    if (v[nx][ny] == '#') return cost;
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }
return -1;
}
signed main() {
    string start,end;
    while (cin>>start>>end) {
        int startx=start[0]-'a';
        int starty=start[1]-'1';
        int endx=end[0]-'a';
        int endy=end[1]-'1';
        v[startx][starty]='@';
        v[endx][endy]='#';
        // cout<<startx<<starty<<endx<<endy;
        cout << "To get from " << start << " to " << end << " takes " << bfs(startx,starty);
        cout << " knight moves." << endl;
        v.assign(8, vector<char>(8, '.'));
    }
}