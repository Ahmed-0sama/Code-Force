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
const int dx[] = {0, 1,0,-1};
const int dy[] = {1, 0,-1,0};
int n,m;
//vector<vector<int>> adj;
string path;
int MOD=998244353;
vector<int> v;
vector<vector<bool>> vis;
bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j]);
}
//bitset<N+1>is_Prime;
//vector<int>primes;
int dp[N][N];
//7 1 5 3 6 4
//
bool isPalindrome(string s) {
    string res = "";
    for (char c : s) {
        if (isalnum(c)) {
            res += tolower(c);
        }
    }

    int l = 0, r = res.size() - 1;
    while (l < r) {
        if (res[l] != res[r]) return false;
        l++;
        r--;
    }
    return true;
}
signed main() {
    string s;getline(cin,s);
    cout<<ispalindrome(s);
}