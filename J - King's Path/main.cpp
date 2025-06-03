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
const int N=1e7;
vector<int> color;
int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, -1, 1 };

int n,m;
vector<vector<int>> adj;
string path;
int MOD=1073741824;
vector<vector<char>> graph(8, vector<char>(8, '.'));
vector<int> vis;
map<pair<int,int>,int>mp;
map<pair<int,int>,int>viss;
bool valid(int i, int j) {
    return (i >= 0 && j >= 0&&viss.count({i, j}) && viss[{i, j}] == -1);
}
bitset<N+1>is_Prime;
vector<int>primes;
void sieve(){
    is_Prime.set();
   is_Prime[0]=is_Prime[1]=0;
    for (int i=2;i*i<=N;i++) {
        if (is_Prime[i]) {
            for (int j=i*i;j<=N;j+=i) {
                is_Prime[j]=0;
            }
        }
    }
    for (int i=2;i<N;i++) {
        if (is_Prime[i]==true) {
            primes.push_back(i);
        }
    }

}
int divistors(int n) {
    vector<int>ans;
    for (int i=2;i*i<=n;i++) {
        while (n%i==0) {
            ans.push_back(i);
            n/=i;
        }
    }
    if (n>1)ans.push_back(n);
    return ans.back();
}
int bfs(int x0,int y0,int x1,int y1 ) {
    queue<pair<int,int>>q;
    q.push({x0,y0});
    while (!q.empty()) {
        pair<int,int>p=q.front();
        q.pop();
        int x=p.first,y=p.second;
        viss[{x,y}]=1;
        if (x==x1&&y==y1) {
            break;
        }
        for (int i=0;i<8;i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (valid(nx,ny)) {
                viss[{nx, ny}] = 1;
                mp[{nx,ny}]=mp[{x,y}]+1;
                q.push({nx,ny});
            }
        }
    }
    return viss[{x1, y1}] == 1 ? mp[{x1, y1}] : -1;
}
signed main() {
    fastread();
    int x0,y0,x1,y1;
    cin>>x0>>y0>>x1>>y1;
    cin>>n;
    for (int i=0;i<n;i++) {
        int r,a,b;cin>>r>>a>>b;
        for (int j=a;j<=b;j++) {
            mp[{r,j}]=0;
            viss[{r,j}]=-1;
        }
    }
    cout<<bfs(x0, y0, x1, y1)<<endl;
}