#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int dp_solve(vector<vector<int>>& v, vector<vector<int>>& dp, int n, int d) {
    if (n == v.size()) {
        return 0;
    }
    if (dp[n][d] != -1) {
        return dp[n][d];
    }
    int a = 0, b = 0, c = 0;
    if (d == 0) {
        a = dp_solve(v, dp, n + 1, 1) + v[n][0];
        b = dp_solve(v, dp, n + 1, 2) + v[n][1];
        c = dp_solve(v, dp, n + 1, 3) + v[n][2];
    } else if (d == 1) {
        b = dp_solve(v, dp, n + 1, 2) + v[n][1];
        c = dp_solve(v, dp, n + 1, 3) + v[n][2];
    } else if (d == 2) {
        a = dp_solve(v, dp, n + 1, 1) + v[n][0];
        c = dp_solve(v, dp, n + 1, 3) + v[n][2];
    } else if (d == 3) {
        a = dp_solve(v, dp, n + 1, 1) + v[n][0];
        b = dp_solve(v, dp, n + 1, 2) + v[n][1];
    }
    return dp[n][d] = max({a, b, c});
}

signed main() {
    fastread();
    int n;
    cin >> n;
    vector<vector<int>> dp(n, vector<int>(4, -1));
    vector<vector<int>> v(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[i][j];
        }
    }

    cout << dp_solve(v, dp, 0, 0) << endl;
}
