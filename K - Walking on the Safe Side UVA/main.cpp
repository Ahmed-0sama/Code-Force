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
const int N=1e3;
int dp [N][N];
// int cnt=0;
int solve(int i,int j,int w,int n,vector<vector<char>>&v) {
    if (i==w||j==n) {
        return 0;
    }
    if (dp[i][j]!=-1)return dp[i][j];
    if (v[i][j]=='#'||i>=w||j>=n)return 0;
    if (i==w-1&&j==n-1)return 1;
    int res=solve(i,j+1,w,n,v)+solve(i+1,j,w,n,v);
    return dp[i][j]=res;
}
signed main() {
    int t;cin>>t;
    while (t--) {
        int w, n;
        cin >> w >> n;
        cin.ignore(); // Ignore the newline after w, n

        vector<vector<char>> v(w, vector<char>(n, '.')); // Initialize the grid with '.'
        memset(dp,-1,sizeof dp);
        for (int i = 0; i < w; i++) {
            string s;
            getline(cin, s);
            if (s.empty()) continue; // Ignore empty lines
            stringstream ss(s);
            int row;
            ss >> row; // First number is the row index (1-based)
            row--; // Convert to 0-based

            int col;
            bool hasColumn = false;
            while (ss >> col) { // Read column indices (1-based)
                hasColumn = true;
                col--; // Convert to 0-based
                if (row >= 0 && row < w && col >= 0 && col < n) {
                    v[row][col] = '#';
                }
            }
        }
        int ans = solve(0, 0, w, n, v);
        cout << ans << endl;
    }
    // cout<<cnt<<endl;

    // // Print the final grid
    // for (int i = 0; i < w; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << v[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
}