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
const int N =100;
int dp[N][N];
int MOD=1e9+7;
int solve(int i,int j,vector<vector<int>>&v,int h,int w) {
    if (i==h||j>=w||j<0)return 0;
    if (dp[i][j]!=-1)return dp[i][j];
    int res=0;
    res=max(res,solve(i+1,j,v,h,w)+v[i][j]);
    if (j+1<w)res=max(res,solve(i+1,j+1,v,h,w)+v[i][j]);
    if (j-1>=0)res=max(res,solve(i+1,j-1,v,h,w)+v[i][j]);
    return dp[i][j]=res;
}
signed main() {
    int t;cin>>t;
    while (t--) {
        int h,w;cin>>h>>w;
        vector<vector<int>>v(h,vector<int>(w));
        memset(dp, -1, sizeof dp);
        for (int i=0;i<h;i++) {
            for (int j=0;j<w;j++) {
                cin>>v[i][j];
            }
        }
        int ans=INT_MIN;
        for (int i=0;i<w;i++) {
            ans=max(ans,solve(0,i,v,h,w));
        }
        cout<<ans<<endl;
    }
}