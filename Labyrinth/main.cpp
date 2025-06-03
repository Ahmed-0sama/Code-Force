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
int spath=0;
string ans="";
string dir="";
const int N=1e4;
vector<int> color(N, 0);
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
vector<int>adj[N];
int vistCount[N];
string path;
vector<vector<char>> s;
bool valid(int x,int y) {
    return (x >= 0 && y >= 0 && x < n && y < m) && (s[x][y] == '.' || s[x][y] == 'B');

}
struct node {
    int x,y,cost;
    char dir;
    node(int X, int Y, int c, char d) : x(X), y(Y), cost(c), dir(d) {}
};
void bfs(int startx,int starty,int endx,int endy) {
    queue<node>q;
    q.push(node(startx,starty,0,'A'));
    while (!q.empty()) {
        node p=q.front();
        q.pop();
        s[p.x][p.y]=p.dir;
        if (p.x==endx&&p.y==endy){
            ans="YES";
            spath=p.cost;
            return ;
        }
        if (valid(p.x,p.y-1))q.push(node(p.x,p.y-1,p.cost+1,'L')),s[p.x][p.y-1]='L';
        if (valid(p.x,p.y+1))q.push(node(p.x,p.y+1,p.cost+1,'R')),s[p.x][p.y+1]='R';
        if (valid(p.x+1,p.y))q.push(node(p.x+1,p.y,p.cost+1,'D')),s[p.x+1][p.y]='D';
        if (valid(p.x-1,p.y))q.push(node(p.x-1,p.y,p.cost+1,'U')),s[p.x-1][p.y]='U';
    }
    ans="NO";
}
signed main() {
    cin>>n>>m;
    int startx,starty,endx,endy;
    s.assign(n, vector<char>(m));
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>s[i][j];
            if (s[i][j]=='A')startx=i,starty=j;
            else if (s[i][j]=='B')endx=i,endy=j;
        }
    }
    bfs(startx,starty,endx,endy);
    cout<<ans<<endl;
    string path="";
    if (ans=="YES") {
        cout<<spath<<endl;
        int i=endx,j=endy;
        while (i!=startx||j!=starty) {
            path+=s[i][j];
            if (s[i][j]=='L')j++;
            else if (s[i][j]=='R')j--;
            else if (s[i][j]=='U')i++;
            else if (s[i][j]=='D')i--;
        }
        reverse(path.begin(),path.end());
        cout<<path<<endl;
    }
}