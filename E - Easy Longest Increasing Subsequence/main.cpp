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
constexpr
int N=1e4;
int dp[N][N];
int solve(int n,int i,vector<int>&v,int last) {
    if (i==n)return 0;
    if (dp[i][last+1]!=-1)return dp[i][last+1];
    int a=solve(n,i+1,v,last);
    if (v[last]<v[i]||last==-1) {
        a=max(a,solve(n,i+1,v,i)+1);
    }
    return dp[i][last+1]=a;
}
signed main() {
    fastread();
    int n;cin>>n;
    vector<int>v(n);
    memset(dp,-1,sizeof dp);
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    cout<<solve(n,0,v,-1)<<endl;
}