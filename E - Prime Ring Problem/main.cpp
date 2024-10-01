#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

const int MAX_N = 16;
bool is_prime(int num);
void solve(int n, int case_num);
void backtrack(int pos, int n);

int n;
vector<int> ring;
vector<bool> used;

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void backtrack(int pos, int n) {
    if (pos == n && is_prime(ring[0] + ring[n - 1])) {
        // A valid arrangement found
        for (int i = 0; i < n; ++i) {
            if (i > 0) cout << " ";
            cout << ring[i];
        }
        cout << endl;
        return;
    }

    for (int i = 2; i <= n; ++i) {
        if (!used[i] && is_prime(ring[pos - 1] + i)) {
            ring[pos] = i;
            used[i] = true;
            backtrack(pos + 1, n);
            used[i] = false; // Backtrack
        }
    }
}
void solve(int n, int case_num) {
    ring = vector<int>(n, 0);
    used = vector<bool>(n + 1, false);

    ring[0] = 1;
    used[1] = true;

    cout << "Case " << case_num << ":" << endl;
    backtrack(1, n);
}

int main() {
    int test_case = 0;
    while (cin >> n) {
        if (test_case > 0) cout << endl;
        solve(n, ++test_case);
    }
    return 0;
}
