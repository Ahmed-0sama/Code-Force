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
string dir="";
const int N=1e4;
vector<int> color(N, 0);
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
vector<int>adj[N];
vector<vector<int>> vis;
string path;
int n;
vector<vector<char>> s;
bool valid(int x,int y) {
    return (x >= 0 && y >= 0 && x < n && y < n);
}
vector<vector<char>>v(n,vector<char>(n));
void dfs(int i,int j) {
    if (!valid(i,j)||v[i][j]=='0'||vis[i][j]!=0)return ;
    vis[i][j]=1;
    if (v[i][j]=='1') {
        if (valid(i+1,j)) {
            dfs(i+1,j);
        }
         if (valid(i-1,j)) {
            dfs(i-1,j);
        }
         if (valid(i,j-1)) {
            dfs(i,j-1);
        }
         if (valid(i,j+1)) {
            dfs(i,j+1);
        }
         if (valid(i+1,j+1)) {
            dfs(i+1,j+1);
        }
         if (valid(i-1,j-1)) {
            dfs(i-1,j-1);
        }
         if (valid(i-1,j+1)) {
            dfs(i-1,j+1);
        }
         if (valid(i+1,j-1)) {
            dfs(i+1,j-1);
        }
    }
}

signed main() {
    fastread();
    int image_number = 0;
    while (cin>>n) {
        image_number++;
        v.assign(n, vector<char>(n));
        vis.assign(n, vector<int>(n, 0));
        for (int i=0;i<n;i++) {
            string s;cin>>s;
            for (int j=0;j<n;j++) {
                v[i][j]=s[j];
            }
        }
        int cnt=0;
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (!vis[i][j]&&v[i][j]=='1'){
                    dfs(i,j);cnt++;
                }
            }
        }
        cout << "Image number " << image_number << " contains " << cnt << " war eagles." << endl;
    }
}