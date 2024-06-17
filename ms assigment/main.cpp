#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool isValid(int row, int col, int N, int M) {
    return row >= 0 && row < N && col >= 0 && col < M;
}

int shortestPath(vector<vector<int>>& matrix, int X) {
    int N = matrix.size();
    int M = matrix[0].size();

    queue<pair<pair<int, int>, int>> q;
    q.push({{0, 0}, 0});

    vector<vector<bool>> visited(N, vector<bool>(M, false));
    visited[0][0] = true;

    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    while (!q.empty()) {
        pair<pair<int, int>, int> current = q.front();
        q.pop();

        int row = current.first.first;
        int col = current.first.second;
        int distance = current.second;

        if (row == N - 1 && col == M - 1) {
            return distance;
        }

        for (pair<int, int> dir : directions) {
            int newRow = row + dir.first;
            int newCol = col + dir.second;

            if (isValid(newRow, newCol, N, M) && matrix[newRow][newCol] != X + 1 &&
                !visited[newRow][newCol]) {
                q.push({{newRow, newCol}, distance + 1});
                visited[newRow][newCol] = true;
            }
        }
    }

    return -1;
}

int main() {
    vector<vector<int>> matrix = {
            {1, 2, 3, 3},
            {3, 4, 5, 6},
            {2, 4, 5, 6},
            {3, 3, 1, 3}
    };

    int X = 3;
    int shortest = shortestPath(matrix, X);
    cout << "Shortest path length: " << shortest << endl;

    return 0;
}