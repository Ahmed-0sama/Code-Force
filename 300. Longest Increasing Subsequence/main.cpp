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
const int N=1e4;
//vector<int> color;
const int dx[] = {0, 1};
const int dy[] = {1, 0};
int n,m;
//vector<vector<int>> adj;
string path;
int MOD=998244353;
vector<vector<char>> v;
vector<vector<bool>> vis(2, vector<bool>(N));
bool valid(int i, int j) {
    return (i >= 0 && i < m && j >= 0 && j < n);
}
//bitset<N+1>is_Prime;
//vector<int>primes;
//int d[N]={0};
map<pair<int, int>, int> dp;
int solve(int i,int n,vector<int>&v,int prev) {
    if (i==n)return 0;
    if (dp.count({i, prev})) return dp[{i, prev}];
    int leave=solve(i+1,n,v,prev);
    int take=0;
    if (v[i]>prev||prev==-1) {
        take=solve(i+1,n,v,v[i])+1;
    }
    return dp[{i, prev}] = max(leave, take);
}
signed main() {
    vector<int>v;
    int t;
    while (cin>>t) {
        v.push_back(t);
    }
    //memset(dp,-1,sizeof dp);
    cout<<solve(0,v.size(),v,-1)<<endl;
}