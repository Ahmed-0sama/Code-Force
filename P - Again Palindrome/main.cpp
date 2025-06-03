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
const int N = 1e3;
int dp[N][N];
int solve(int n,int l,int r,string&s) {
    if (l>r)return 0;
    if (l==r)return 1;
    if (dp[l][r]!=-1)return dp[l][r];
    int res=INT_MIN;
    if (s[l]==s[r]) res=max(res,solve(n,l+1,r,s)+solve(n,l,r-1,s)+1);
    else {
        res=max(res,solve(n,l+1,r,s)+solve(n,l,r-1,s)-solve(n,l+1,r-1,s));
    }
    return dp[l][r]=res;
}
signed main() {
    int t;cin>>t;
    while (t--) {
        string s;cin>>s;
        memset(dp,-1,sizeof dp);
        cout<<solve(s.size(),0,s.size()-1,s)<<endl;
    }
}