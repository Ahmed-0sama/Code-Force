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
vector<int> color;
const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

int n,m;
vector<vector<int>> adj;
string path;
vector<vector<char>> v(8, vector<char>(8, '.'));
vector<int> vis;
// bool valid(int i, int j) {
//     return (i >= 0 && i < 8 && j >= 0 && j < 8 && !vis[i][j]); // Corrected order
// }
int cntpoints(vector<pair<int, int>>& vec) {
    if (vec.empty()) return 0;
    sort(vec.begin(), vec.end());
    int cx = 0, cl = vec[0].first, cr = vec[0].second;
    for (auto [l, r] : vec) {
        if (l > cr + 1) {
            cx += (cr - cl + 1);
            cl = l, cr = r;
        } else {
            cr = max(cr, r);
        }
    }
    cx += (cr - cl + 1);
    return cx;
}
signed main() {
    int t;cin>>t;
    while (t--) {
        cin>>n>>m;
        vector<pair<int,int>>c;
        for (int i=0;i<n;i++) {
            int x;cin>>x;
            c.push_back({x,0});
        }
        int total=0;
        for (int i=0;i<n;i++) {
            int x;cin>>x;
            c[i].second=x;
            total+=x;
        }
        map<int,vector<pair<int,int>>>rang;
        for ( auto [x,r]:c) {
            for (int y=-r;y<=r;y++) {
                int dd=sqrt(r*r-y*y);
                rang[y].push_back({x-dd,x+dd});
            }
        }
        int res=0;
        for (auto &[y, r] : rang) {
            res += cntpoints(r);
        }
        cout << res << endl;
    }
}
