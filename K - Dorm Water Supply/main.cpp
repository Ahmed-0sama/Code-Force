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
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n,m;
string path;
vector<vector<pair<int,int>>>adj;
// vector<vector<char>> v(8, vector<char>(8, '.'));
vector<int> vis;
// vector<vector<char>>v;
// bool valid(int i, int j) {
//     return i>=0&&j>=0&&i<n&&j<m&&!vis[i][j];
// }
vector<int>dis;
vector<pair<int,pair<int,int>>>ans;
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
int in[1000+5], out[1000+5];
void bfs(int i) {
    vis[i]=1;
    int diameter=INT_MAX;
    queue<int>q;
    q.push(i);
    int last=i;
    bool cyclic=false;
    while (!q.empty()) {
        int node=q.front();
        q.pop();
        for (auto j:adj[node]) {
            pair<int,int>p=j;
            if (!vis[p.first]) {
                vis[p.first]=1;
                last=p.first;
                diameter=min(diameter,p.second);
                q.push((p.first));
            }
            else if (j.first==i) {
                cyclic=true;
            }
        }
    }
    if (!cyclic) {
       ans.push_back({i,{last,diameter}});
    }
}
signed main() {
    fastread();
    cin>>n>>m;
    adj.resize(n + 1);
    vis.assign(n + 1, 0);
    for (int i=0;i<m;i++) {
        int u,v,d;cin>>u>>v>>d;
        adj[u].push_back({v,d});
        out[u]++;
        in[v]++;
    }
    for (int i = 1; i <= n; i++) {
        if(!in[i] && out[i]){
            bfs(i);
        }
    }
    if (ans.size()>0) {
        cout<<ans.size()<<endl;
        for (auto [start,end] : ans) {
            cout<< start <<" "<< end.first <<" "<<end.second << endl;
        }
    }
    else {
        cout<<"0"<<endl;
    }
}
