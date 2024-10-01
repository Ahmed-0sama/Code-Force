#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
int n;
vector<string> chess_board;
vector<vector<string>> answer;

bool is_safe(int row, int col, int n) {
    // Check for the row on the left side
    for (int i = 0; i < col; i++) {
        if (chess_board[row][i] == 'Q') {
            return false;
        }
    }
    // Check for the upper diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (chess_board[i][j] == 'Q') {
            return false;
        }
    }
    // Check for the lower diagonal
    for (int i = row, j = col; i < n && j >= 0; i++, j--) {
        if (chess_board[i][j] == 'Q') {
            return false;
        }
    }
    return true;
}

void solve_n_queen(int col, int n) {
    if (col == n) {
        answer.push_back(chess_board);
        return;
    }
    for (int i = 0; i < n; i++) {
        if (is_safe(i, col, n)) {
            chess_board[i][col] = 'Q';
            solve_n_queen(col + 1, n);
            chess_board[i][col] = '.';
        }
    }
}

void print_solution(const vector<vector<string>>& solutions) {
    for (const auto& solution : solutions) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
}

signed main() {
    fastread();
    cin >> n;
    chess_board.resize(n, string(n, '.'));
    solve_n_queen(0, n);
    print_solution(answer);
    return 0;
}
