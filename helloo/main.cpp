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
const int N=1e4;
int dp[N][N];
string t,x;
int lcs(int i,int j){
    if(i==x.size()||j==t.size())return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=INT_MIN;
    if(x[i]==t[j]){
        ans=lcs(i+1,j+1)+1;
    }
    ans=max(lcs(i+1,j),ans);
    ans=max(lcs(i,j+1),ans);
    return dp[i][j]=ans;
}
void print(int i,int j){
    if(i==x.size()||j==t.size()) {
        return;
    }
    if(x[i]==t[j]) {
        if (dp[i][j] == lcs(i + 1, j + 1) + 1) {
            cout << x[i];
            print(i + 1, j + 1);
            return;
        }
    }
    if(dp[i][j]==dp[i+1][j]){
        print(i+1,j);
        return;
    }
    if(dp[i][j]==dp[i][j+1]){
        print(i,j+1);
        return;
    }

}
signed main(){
    cin>>t;
    cin>>x;
    memset(dp,-1,sizeof dp);
    lcs(0,0);
    print(0,0);
    return 0;
}