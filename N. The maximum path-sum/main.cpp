#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
int N, M;
vector<vector<int>> memo;

bool valid(int i, int j) {
    return i >= 0 && i < N && j >= 0 && j < M;
}
int maxPathSum(int r, int c, vector<vector<int>> &grid) {
    if (!valid(r, c)) return LLONG_MIN;
    if (r == N - 1 && c == M - 1) return grid[r][c];
    if (memo[r][c] != LLONG_MIN) return memo[r][c];

    int path1 = maxPathSum(r, c + 1, grid);
    int path2 = maxPathSum(r + 1, c, grid);

    return memo[r][c] = grid[r][c] + max(path1, path2);
}

signed main() {
    fastread();
    cin >> N >> M;
    vector<vector<int>> grid(N, vector<int>(M));
    memo = vector<vector<int>>(N, vector<int>(M, LLONG_MIN));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }

    cout << maxPathSum(0, 0, grid) << endl;
    return 0;
}
