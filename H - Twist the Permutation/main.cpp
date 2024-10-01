#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> d(n, 0);
        for (int i = n - 1; i >= 1; --i) {
            int pos = -1;
            for (int j = 0; j <= i; ++j) {
                if (a[j] == i + 1) {
                    pos = j;
                    break;
                }
            }
            if (pos == -1) {
                cout << -1 << endl;
                break;
            }
            d[i] = (pos + 1) % (i + 1);
            if (d[i] != 0) {
                rotate(a.begin(), a.begin() + pos + 1, a.begin() + i + 1);
            }
        }
        cout << 0 << " ";
        for (int i = 1; i < n; ++i) {
            cout << d[i] << " ";
        }
        cout << endl;
    }
    return 0;
}