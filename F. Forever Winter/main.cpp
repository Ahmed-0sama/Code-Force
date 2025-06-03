#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define The_end return 0
#define endl "\n"

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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n,m;
string path;
vector<vector<int>>adj;
// vector<vector<char>> v(8, vector<char>(8, '.'));
vector<vector<int>> vis;
// vector<vector<char>>v;
vector<vector<char>>grid;
// bool valid(int i, int j) {
//     return i >= 0 && j >= 0 && i < n && j < m && !vis[i][j];
// }
vector<int>color;
vector<int>dis;
vector<int> pos;
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
vector<int>ans;
bool preceed(pair<int,int>a,pair<int,int>b) {
    return a.second<b.second;
}
int comp(vector<pair<int, int>> &points) {
    if (points.empty()) return 0;
    int mnx = points[0].first, mxx = points[0].first;
    int mny = points[0].second, mxy = points[0].second;
    for (auto &[x, y] : points) {
        mnx = min(mnx, x);
        mxx = max(mxx, x);
        mny = min(mny, y);
        mxy = max(mxy, y);
    }
    return (mxx - mnx + 1) * (mxy - mny + 1);
}
signed main() {
    int t;cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> mon(n);
        for (int i=0;i<n;i++) {
            cin >>mon[i].first>>mon[i].second;
        }
        vector<pair<int, int>> xsort = mon;
        vector<pair<int, int>> ysort = mon;
        sort(xsort.begin(), xsort.end());
        sort(ysort.begin(), ysort.end(),preceed);
        set<pair<int, int>> set;
        for (int i = 0; i <min(2LL, (long long)n); i++) {
            set.insert(xsort[i]);
            set.insert(ysort[i]);
            set.insert(xsort[n - 1 - i]);
            set.insert(ysort[n - 1 - i]);
        }
        int area=comp(mon);
        for (auto &p : set) {
            vector<pair<int, int>> temp;
            bool removed = false;
            for (auto &q : mon) {
                if (!removed && q == p) {
                    removed = true;
                    continue;
                }
                temp.push_back(q);
            }
            area = min(area, comp(temp));
        }

        cout << area << endl;
    }
}