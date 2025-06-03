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
const int N=1e6 + 1;
vector<int> color;
const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int n,m;
vector<vector<int>> adj;
string path;
int MOD=1e9+7;
vector<vector<char>> v(8, vector<char>(8, '.'));
vector<int> vis;
// bool valid(int i, int j) {
//     return (i >= 0 && i < 8 && j >= 0 && j < 8 && !vis[i][j]); // Corrected order
// }
bitset<N+1>is_Prime;
vector<int>primes;
int d[N]={0};
int dp[N];
void sieve(){
    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
            d[j] += i;
    }
}
int solve(int i,int n,vector<int>&v) {
    if (i==n-1)return 0;
    if (dp[i]!=-1)return dp[i];
    int take=INT_MAX;
    for (int j=1;j<=v[i];j++) {
        if (i+j<n){
            take=min(take,solve(i+j,n,v)+1);
        }
    }
    return dp[i]=take;
}
signed main() {
    vector<int>v;
    int t;
    while (cin>>t) {
        v.push_back(t);
    }
    memset(dp,-1,sizeof (dp));
    // for (int i=0;i<v.size();i++) {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    cout<<solve(0,v.size(),v)<<endl;
}