#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main() {
    fastread();
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int sum = 0;
    int s = 0;
    int e = 0;
    int ans = 0;

    while (e < v.size()) {
        sum += v[e];

        while (sum > m && s <= e) {
            sum -= v[s];
            s++;
        }

        if (sum <= m) {
            ans = max(ans, e - s + 1);
        }

        e++;
    }

    cout << ans << endl;
}
