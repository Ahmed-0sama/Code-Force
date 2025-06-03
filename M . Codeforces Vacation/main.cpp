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
const int N=1e3;
int dp [N][N];
int solve(int i,int n,vector<int>&v,int flag) {
    if (i==n){
    return 0;}
    if(dp[i][flag]!=-1) return dp[i][flag];
    int res = 1 + solve(i + 1, n, v, 0);

    if (v[i] == 1 || v[i] == 3) {
        if (flag != 1) res = min(res, solve(i + 1, n, v, 1));
    }
    if (v[i] == 2 || v[i] == 3) {
        if (flag != 2) res = min(res, solve(i + 1, n, v, 2));
    }

    return dp[i][flag] = res;
}

signed main() {
    int n;cin>>n;
    memset(dp, -1, sizeof dp);
    vector<int>v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    cout<<solve(0,n,v,0);
}