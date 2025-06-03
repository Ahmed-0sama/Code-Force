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
int main() {
    int t;cin>>t;
    while (t--) {
        cin>>n>>m;
        vector<vector<int>>v(n,vector<int>(m));
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                cin>>v[i][j];
            }
        }
        bool right=true;
        set<pair<int, int>> edges;
        for (int j=0;j<m;j++) {
            vector<int>nodes;
            for (int i=0;i<n;i++) {
                if (v[i][j]==1)nodes.push_back(i);
            }
            if (nodes.size()!=2) {
                right=false;
                break;
            }
            pair<int, int> edge = {min(nodes[0], nodes[1]), max(nodes[0], nodes[1])};
            if (edges.count(edge)) {
                right=false;
                break;
            }
            edges.insert(edge);
        }
        cout << (right ? "Yes" : "No") << endl;
    }
}