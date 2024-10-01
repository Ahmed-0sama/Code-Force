#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Check if it's possible to form k mountains
        if (n < 3 * k) {
            cout << -1 << endl;
            continue;
        }

        // Sort the array
        sort(a.begin(), a.end());

        vector<int> result(n);
        int left = 0, right = n - 1;

        // Fill the result array to form mountains
        for (int i = 0; i < k; ++i) {
            // The peak of the i-th mountain
            result[2 * i + 1] = a[right--];
            // Left side of the i-th mountain
            result[2 * i] = a[left++];
            // Right side of the i-th mountain
            result[n - 1 - i] = a[left++];
        }

        // Fill remaining elements
        for (int i = 2 * k; i < n - k; ++i) {
            result[i] = a[left++];
        }

        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
