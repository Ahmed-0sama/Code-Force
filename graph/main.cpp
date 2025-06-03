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
int n,m,ans;
const int N=1e3+5;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,-0};
char s[N][N];
int color[N];
vector<int>adj[N];
bool vis[N][N];
bool valid(int x,int y,char c) {
    return x<n&&x>=0&&y>=0&&y<m&&y>0&&!vis[x][y]&&s[x][y]==c;
}
void dfs(int x,int y,char c) {
    vis[x][y]=1;
    for (int i=0;i<4;i++) {
        int Nx=x+dx[i],Ny=y+dy[i];
        if (valid(Nx,Ny,c))dfs(Nx,Ny,c);
    }
}
signed main() {
    fastread();
    cin>>n>>m;
    for (int i=0;i<n;i++){for (int j=0;i<m;j++) cin>>s[i][j];}
    for (int i=0;i<n;i++) {
        for (int j=0;i<m;j++) {
            if (!vis[i][j]) ans++,dfs(i,j,s[i][j]);
        }
    }
    cout<<ans;
}
