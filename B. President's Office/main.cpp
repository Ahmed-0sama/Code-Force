#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

int dirx[] = {-1, 0, 1, 0};
int diry[] = {0, 1, 0, -1};
int n, m;
char col;

bool valid(int x, int y) {
    return x > -1 && x < n && y > -1 && y < m;
}

signed main() {
    fastread();
    cin >> n >> m >> col;

    vector<vector<char>> v(n, vector<char>(m, '.'));
    set<char> ans;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (v[i][j] == col) {
                for (int k = 0; k < 4; ++k) {
                    int tox = i + dirx[k];
                    int toy = j + diry[k];
                    if (valid(tox, toy) && v[tox][toy] != col && v[tox][toy] != '.') {
                        ans.insert(v[tox][toy]);
                    }
                }
            }
        }
    }

    cout << ans.size() << endl;
}
