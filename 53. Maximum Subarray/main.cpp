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
//*=========================>>>Main-Code<<<=======================
int sx,ex,sy,ey;
int spath=0;
string ans="";
string dir="";
const int N=1001;
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
int dp[N][N];
int solve(int i,int n,vector<int>&v,int curr,int&max_sum) {
    if (i==n)return 0;
    if (dp[i][curr]!=-1)return dp[i][curr];
    int mx=INT_MIN;
    curr=max(v[i],curr+v[i]);
    max_sum=max(curr,max_sum);
    solve(i + 1,n,v, curr, max_sum);
    return dp[i][curr]=max_sum;
}
signed main() {
    vector<int>v;
    int t;
    while (cin>>t) {
        v.push_back(t);
    }
    memset(dp,-1,sizeof dp);
    int mx=INT_MIN;
    solve(0,v.size(),v,0,mx);
    cout<<mx<<endl;
}