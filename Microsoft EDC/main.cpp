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
// signed main() {
//     cin>>n;
//     vector<int>v(n);
//     int odd=0;
//     int even=0;
//     for (int i=0;i<n;i++) {
//         cin>>v[i];
//         if (i%2==0) {
//             even+=v[i];
//         }
//         else {
//             odd+=v[i];
//         }
//     }
//     int ans=-1;
//     int preodd=0;int preeven=0;
//     for (int i=0;i<n;i++) {
//         int neweven=0;int newodd=0;
//         if (i%2==0) {
//             neweven=preeven+(odd-preodd);
//             newodd=preodd+(even-preeven-v[i]);
//         }
//         else {
//             neweven=preeven+(odd-preodd-v[i]);
//             newodd=preodd+(even-preeven);
//         }
//         if (neweven==newodd) {
//             cout << (i + 1) << endl;
//             The_end;
//         }
//         if (i % 2 == 0)
//             preeven += v[i];
//         else
//             preodd += v[i];
//     }
//     cout << -1 << endl;
// }

signed main() {
    string s;cin>>s;
    vector<int> gp;
    int cnt = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
        } else {
            gp.push_back(cnt);
            cnt = 1;
        }
    }
    gp.push_back(cnt);
    int res = 0;
    for (int i = 1; i < gp.size(); i++) {
        res += min(gp[i - 1], gp[i]);
    }
    cout<<res<<endl;
}