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
int n,m,sx,ex,sy,ey;
string ans="";
string v="";
string dir="RLDU";
const int N=1e3+5;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
char s[N][N];
int color[N];
bool vis[N][N];
bool valid(int x,int y) {
    return x < n && x >= 0 && y >= 0 && y < m && !vis[x][y] && s[x][y] != '#';
}
void dfs(int x,int y) {
    if (s[x][y]=='B') {
        if (ans=="")ans=v;
        if (ans.size()>v.size()) {
            ans=v;
        }
    }
    vis[x][y]=1;
    for (int i=0;i<4;i++) {
        int Nx=x+dx[i],Ny=y+dy[i];
        if (valid(Nx,Ny)){
            v.push_back(dir[i]);
            dfs(Nx,Ny);
            v.pop_back();
        }
    }
    vis[x][y]=0;
}
signed main() {
    fastread();
    cin>>n>>m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>s[i][j];
            if (s[i][j]=='A')sx=i,sy=j;
        }
    }
    dfs(sx,sy);
    if (ans=="")cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        cout<<ans<<endl;
    }
    The_end;
}
