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
bool palindrome(int i,int j,int n,string &s) {
    if (i>=j)return 1;
    if (dp[i][j]!=-1)return dp[i][j];
    if (s[i]!=s[j])return false;
    return dp[i][j]=palindrome(i+1,j-1,n,s);
}
pair<int,int> findlongest(string &s) {
    n=s.size();
    int maxlen=-1;
    int start=-1;
    for (int i=0;i<n;i++) {
        for (int j=i;j<n;j++) {
            if (palindrome(i,j,n,s)) {
                int len=j-i+1;
                if (len>maxlen) {
                    maxlen=len;
                    start=i;
                }
            }
        }
    }
    return {start,maxlen};
}

signed main() {
    fastread();
    string s;
    cin>>s;
    memset(dp,-1, sizeof dp);
    pair<int,int> x=findlongest(s);
    cout<<s.substr(x.first,x.second);
}