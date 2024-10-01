#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

int N, M;
int comp = 0;

bool valid(int i, int j) {
    return i >= 0 && i < N && j >= 0 && j < M;
}

void reachable(int r, int c, vector<vector<bool>> &vis, vector<vector<char>> &maze, char ch) {
    if (!valid(r, c) || vis[r][c] || maze[r][c] != ch)
        return;
    vis[r][c] = true;
    reachable(r, c - 1, vis, maze, ch);
    reachable(r, c + 1, vis, maze, ch);
    reachable(r - 1, c, vis, maze, ch);
    reachable(r + 1, c, vis, maze, ch);
}

void count_comp(vector<vector<bool>> &vis, vector<vector<char>> &maze) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (!vis[i][j]) {
                reachable(i, j, vis, maze, maze[i][j]);
                comp++;
            }
        }
    }
}

signed main() {
    fastread();
    cin >> N >> M;
    vector<vector<char>> maze(N, vector<char>(M));
    vector<vector<bool>> vis(N, vector<bool>(M, false));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> maze[i][j];
        }
    }

    count_comp(vis, maze);
    cout << comp << endl;

    return 0;
}
