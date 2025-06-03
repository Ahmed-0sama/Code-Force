#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const int N = 1e5;
int n;
int dp[N][3];
int v[N][3];

int solve(int i, int j) {
    if (i == n) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    int mx = INT_MIN;
    for (int k = 0; k < 3; ++k) {
        if (k != j) {
            mx = max(mx, v[i][k] + solve(i + 1, k));
        }
    }
    dp[i][j] = mx;
    return dp[i][j];
}

signed main() {
    fastread();
    cin >> n;
    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> v[i][j];
        }
    }
    cout << max({solve(0, 0), solve(0, 1), solve(0, 2)}) << endl;
}
