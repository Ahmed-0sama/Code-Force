#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 8;
int board[N][N];
bool row_used[N], col_used[N], diag1_used[2 * N - 1], diag2_used[2 * N - 1];
int max_sum;

void backtrack(int row, int current_sum) {
    if (row == N) {
        max_sum = max(max_sum, current_sum);
        return;
    }

    for (int col = 0; col < N; ++col) {
        if (!col_used[col] && !diag1_used[row - col + N - 1] && !diag2_used[row + col]) {

            col_used[col] = diag1_used[row - col + N - 1] = diag2_used[row + col] = true;

            backtrack(row + 1, current_sum + board[row][col]);

            col_used[col] = diag1_used[row - col + N - 1] = diag2_used[row + col] = false;
        }
    }
}

int main() {
    int k;
    cin >> k;

    while (k--) {
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                cin >> board[i][j];

        // Reset tracking arrays
        memset(row_used, false, sizeof(row_used));
        memset(col_used, false, sizeof(col_used));
        memset(diag1_used, false, sizeof(diag1_used));
        memset(diag2_used, false, sizeof(diag2_used));

        max_sum = 0;
        backtrack(0, 0);

        cout.width(5);
        cout << max_sum << endl;
    }

    return 0;
}
