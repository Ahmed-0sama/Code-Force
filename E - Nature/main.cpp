#include <iostream>
#include <bits/stdc++.h>
 using namespace std;
// #define int long long
// #define The_end return 0
// #define endl "\n"
// //const int MOD = 1e9 + 7;
// //*=========================>>>Fast-IO-Functions<<<=================
void fastread()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
// //*=========================>>>File-IO-Functions<<<=================
// void fileIO()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }
// //*=========================>>>Utility-Templates<<<=================
// template <typename T> T GCD(T vec, T b) { return (b == 0 ? vec : GCD(b, vec % b)); }
// template <typename T> T LCM(T vec, T b) { return (vec / GCD(vec, b) * b); }
// template <typename T> T factorial(T n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
// template <typename T> T fibonacci(T n) { return n <= 1 ? n : fibonacci(n - 1) + fibonacci(n - 2); }
// template <typename T> T maxthree(T vec, T b, T c) { return max(vec, max(b, c)); }
// template <typename T> T minthree(T vec, T b, T c) { return min(vec, min(b, c)); }
// template <typename T> T maxfour(T vec, T b, T c, T d) { return max(max(vec, b), max(c, d)); }
// template <typename T> T minfour(T vec, T b, T c, T d) { return min(min(vec, b), min(c, d)); }
// //*=========================>>>Main-Code<<<=======================
// int sx,ex,sy,ey;
// int spath=0;
// string ans="";
// string dir="";
// const int N=1e4;
// vector<int> color;
// const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
// const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
//
// int n,m;
// //vector<vector<string>> adj;
// map<string,int>mp;
// string path;
// vector<vector<char>> v(8, vector<char>(8, '.'));
// vector<int> vis;
// // bool valid(int i, int j) {
// //     return (i >= 0 && i < 8 && j >= 0 && j < 8 && !vis[i][j]);
// // }
// //vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);

int dfs(int i, vector<vector<int>>& adj, vector<int>& dp) {
    if (dp[i] != -1) return dp[i];
    int cnt=1;
    for (auto kk:adj[i]) {
       cnt=max(cnt,dfs(kk,adj,dp)+1);
    }
    return dp[i]=cnt;
}
signed main() {
    fastread();
    int C, R;
    while (cin >> C >> R, C || R) {
        unordered_map<string, int> nameToIndex;
        vector<vector<int>> adj(C);
        vector<int> dp(C, -1);
        for (int i = 0; i < C; ++i) {
            string name;
            cin >> name;
            nameToIndex[name] = i;
        }
        for (int i = 0; i < R; ++i) {
            string prey, predator;
            cin >> prey >> predator;
            int u = nameToIndex[prey];
            int v = nameToIndex[predator];
            adj[u].push_back(v);
        }
        int maxChain = 0;
        for (int i = 0; i < C; ++i) {
            maxChain = max(maxChain, dfs(i, adj, dp));
        }

        cout << maxChain << endl;
    }
    return 0;
}