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
int MOD=998244353;
vector<vector<char>> v(8, vector<char>(8, '.'));
vector<int> vis;
// bool valid(int i, int j) {
//     return (i >= 0 && i < 8 && j >= 0 && j < 8 && !vis[i][j]); // Corrected order
// }
bitset<N+1>is_Prime;
vector<int>primes;
int d[N]={0};
int dp[N][N];

int factorial_mod(int x,int y) {
    return (x * 1ll * y) % MOD;
}

signed main() {
    int t;cin>>t;
    while (t--){
    string s;cin>>s;
    int n = s.size();
    int ways = 1;
    int ans = 0;
    for (int l = 0, r = 0; l < n; l = r) {
        while (r < n && s[l] == s[r]) {
            r++;
        }
        int len = r - l;
        ans += len - 1;
        ways = (ways * len) % MOD;
    }
    for (int i = 1; i <= ans; i++) {
        ways =(ways*i)%MOD;
    }
    cout << ans << " " << ways <<endl;
    }
}