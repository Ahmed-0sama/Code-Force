#include <iostream>
#include <vector>
using namespace std;
bool isSquare(const vector<string>& grid, int n) {
    int minRow = n, maxRow = -1, minCol = n, maxCol = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
                minRow = std::min(minRow, i);
                maxRow = std::max(maxRow, i);
                minCol = std::min(minCol, j);
                maxCol = std::max(maxCol, j);
            }
        }
    }

    int size = maxRow - minRow + 1;
    for (int i = minRow; i <= maxRow; i++) {
        for (int j = minCol; j <= maxCol; j++) {
            if (grid[i][j] != '1') {
                return false;
            }
        }
    }

    return (maxCol - minCol + 1) == size;
}

bool isTriangle(const vector<string>& grid, int n) {
    int row = -1, col = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
                row = i;
                col = j;
                break;
            }
        }
        if (row != -1 && col != -1) {
            break;
        }
    }

    int size = 1;
    while (row + size < n && grid[row + size][col] == '1') {
        for (int j = col - size; j <= col + size; j++) {
            if (j < 0 || j >= n || grid[row + size][j] != '1') {
                return false;
            }
        }
        size++;
    }

    return size > 1;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            std::cin >> grid[i];
        }

        if (isSquare(grid, n)) {
            cout << "SQUARE" << std::endl;
        } else {
            cout << "TRIANGLE" << std::endl;
        }
    }

    return 0;
}