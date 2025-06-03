#include <iostream>
#include <vector>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define int long long
const int MOD=1e9+7;
// Function to compute binomial coefficient C(n, k)
int binomialCoeff(int n, int k) {
    vector<int> C(k + 1, 0);
    C[0] = 1;  // C(n, 0) is 1

    for (int i = 1; i <= n; i++) {
        for (int j = min(i, k); j > 0; j--) {
            C[j] = C[j] + C[j - 1];  // Update C(j) using the value of C(j-1)
        }
    }

    return C[k]%MOD;
}

signed main() {
    fastread();

    int t;
    cin >> t;

    vector<int> v(t), g(t);
    for (int i = 0; i < t; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < t; ++i) {
        cin >> g[i];
    }

    for (int i = 0; i < t; ++i) {
        int n = v[i];
        int k = g[i];
        if (k > n) {
            cout << 0 << endl;  // If k > n, C(n, k) is 0
        } else {
            cout << binomialCoeff(n, k) << endl;
        }
    }

    return 0;
}
