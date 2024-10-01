#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))

int longest_increasing_subsequence(int pos, int prev_index, vector<int> &a, vector<vector<int>> &memo) {
    if (pos == a.size()) return 0;

    if (memo[pos][prev_index + 1] != -1) return memo[pos][prev_index + 1];

    int exclude = longest_increasing_subsequence(pos + 1, prev_index, a, memo);

    int include = 0;
    if (prev_index == -1 || a[pos] > a[prev_index]) {
        include = 1 + longest_increasing_subsequence(pos + 1, pos, a, memo);
    }

    memo[pos][prev_index + 1] = max(include, exclude);
    return memo[pos][prev_index + 1];
}

signed main() {
    fastread();
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<vector<int>> memo(n, vector<int>(n + 1, -1));

    cout << longest_increasing_subsequence(0, -1, a, memo) << endl;
}