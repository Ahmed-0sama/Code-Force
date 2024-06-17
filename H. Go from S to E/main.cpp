#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

int N, M;
int dirX[4] = {0, 0, -1, 1};
int dirY[4] = {-1, 1, 0, 0};

bool valid(int i, int j) {
    return i >= 0 && i < N && j >= 0 && j < M;
}

bool bfs(int startX, int startY,vector<vector<char>> &maze,vector<vector<bool>> &vis) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    vis[startX][startY] = true;

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();

        int x = current.first;
        int y = current.second;

        if (maze[x][y] == 'E') {
            return true;
        }

        for (int i = 0; i < 4; i++) {
            int newX = x + dirX[i];
            int newY = y + dirY[i];

            if (valid(newX, newY) && !vis[newX][newY] && (maze[newX][newY] == '.' || maze[newX][newY] == 'E')) {
                vis[newX][newY] = true;
                q.push({newX, newY});
            }
        }
    }
    return false;
}

int main() {
    fastread();
    cin >> N >> M;
    int startX = -1, startY = -1;
    vector<vector<char>> maze(N, vector<char>(M));
    vector<vector<bool>> vis(N, vector<bool>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> maze[i][j];
            if (maze[i][j] == 'S') {
                startX = i;
                startY = j;
            }
            vis[i][j] = false;
        }
    }

    if (startX == -1 || startY == -1) {
        cout << "NO" << endl;
        return 0;
    }
    bool pathExists = bfs(startX, startY,maze,vis);
    cout << (pathExists ? "YES" : "NO") << endl;
    return 0;
}