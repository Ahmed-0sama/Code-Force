#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int calculate_max_bishop_sum(int n, int m, const vector<vector<int>>& board) {
    unordered_map<int, int> main_diagonal_sum;
    unordered_map<int, int> anti_diagonal_sum;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            main_diagonal_sum[i - j] += board[i][j];
            anti_diagonal_sum[i + j] += board[i][j];
        }
    }

    int max_sum = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int current_sum = main_diagonal_sum[i - j] + anti_diagonal_sum[i + j] - board[i][j];
            max_sum = max(max_sum, current_sum);
        }
    }

    return max_sum;
}

signed main() {
    int t;
    cin >> t;
    vector<int> results;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> board(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> board[i][j];
            }
        }

        results.push_back(calculate_max_bishop_sum(n, m, board));
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
