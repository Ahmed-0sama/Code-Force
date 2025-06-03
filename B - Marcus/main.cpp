#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// #define int long long
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
vector<string>dir;
const int N=1e4;
vector<int> color(N, 0);
const int dx[]={-1,0,0};
const int dy[]={-1,-1,1};
vector<int>adj[N];
vector<vector<int>> vis;
string path;
int n,m;
vector<vector<char>> s;
vector<vector<char>> v;
map<char, int> mp = {
    {'I', 0},{'E', 0},{'H', 0},{'O', 0},{'V', 0},{'A', 0}
};
bool valid(int x, int y) {
    if (x >= 0 && y >= 0 && x < n && y < m && !vis[x][y]) {
        return (v[x][y] == 'I' || v[x][y] == 'E' || v[x][y] == 'H' ||
                v[x][y] == 'O' || v[x][y] == 'V' || v[x][y] == 'A' || v[x][y] == '#');
    }
    return false;
}

bool  dfs(int i,int j) {
    if (v[i][j]=='#')return true;
    vis[i][j]=1;
    if (valid(i-1,j)) {
        dir.push_back("forth");
        if (dfs(i-1,j)) return true;
    }
    if (valid(i,j+1)) {
        dir.push_back("right");
        if (dfs(i,j+1)) return true;
    }
    if (valid(i,j-1)) {
        dir.push_back("left");
        if (dfs(i,j-1)) return true;
    }
    return false;
}
signed main() {
    int t;cin>>t;
    while (t--) {
        cin>>n>>m;
        v.assign(n,vector<char>(m));
        vis.assign(n,vector<int>(m,0));
        dir.clear();
        for (int i=0;i<n;i++) {
            string s;cin>>s;
            for (int j=0;j<m;j++) {
                v[i][j]=s[j];
            }
        }
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                if (v[i][j]=='@') {
                    sx=i,sy=j;
                }
            }
        }
        dfs(sx,sy);
        for (int i=0;i<dir.size();i++) {
            if (i==dir.size()-1) {
                cout<<dir[i]<<endl;
            }
            else{
                cout<<dir[i]<<" ";
            }
        }
    }
}