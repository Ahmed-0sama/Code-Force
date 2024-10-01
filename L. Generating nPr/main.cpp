#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

void prem(int i, int n, int r, vector<int> &vis, vector<int> &curr, vector<vector<int>> &result) {
    if (i == r) {
        result.push_back(vector<int>(curr.begin(), curr.begin() + r));
        return;
    }
    for (int j = 0; j < n; j++) {
        if (!vis[j]) {
            vis[j] = 1;
            curr[i] = j + 1;
            prem(i + 1, n, r, vis, curr, result);
            vis[j] = 0;
        }
    }
}

void print_permutations(vector<vector<int>> &result) {
    sort(result.begin(), result.end());
    for (const auto &perm : result) {
        for (int i = 0; i < perm.size(); ++i) {
            cout << perm[i];
            if (i != perm.size() - 1) {
                cout << " ";
            } else {
                cout << endl;
            }
        }
    }
}

signed main() {
    fastread();
    int n, r;
    cin >> n >> r;
    vector<int> vis(n, 0);
    vector<int> curr(r, 0);
    vector<vector<int>> result;
    prem(0, n, r, vis, curr, result);
    print_permutations(result);

    return 0;
}
