#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <iomanip>
#include <set>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

signed main() {
    fastread();
        int n, m;
        cin >> n >> m;
        vector<string> matrix(n);
        for (int i = 0; i < n; ++i) {
            cin >> matrix[i];
        }
        set<int> moves_required;

        for (int i = 0; i < n; ++i) {
            int x = -1, y = -1;
            for (int j = 0; j < m; ++j) {
                if (matrix[i][j] == 'G') {
                    x = j;
                } else if (matrix[i][j] == 'S') {
                    y = j;
                }
            }
            if (y < x) {
                cout << -1 << endl;
                return 0;
            } else {
                int moves = (y - x);
                moves_required.insert(moves);
            }
        }
        cout << moves_required.size() << endl;

        return 0;
    }
