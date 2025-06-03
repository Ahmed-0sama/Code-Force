#include <bits/stdc++.h>
using namespace std;

#define int long long
#define The_end return 0
#define endl "\n"
const int MOD = 1e9 + 7;

//*=========================>>>Fast-IO-Functions<<<=================
void fastread() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

//*=========================>>>File-IO-Functions<<<=================
void fileIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

//*=========================>>>Main-Code<<<=========================
signed main() {
    fastread();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        set<int> pre;

        pre.insert(0);

        int odd = 0, even = 0;
        bool found = false;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                even += v[i];
            } else {
                odd += v[i];
            }
            int diff = odd - even;
            if (pre.find(diff) != pre.end()) {
                found = true;
                break;
            }
            pre.insert(diff);
        }
        cout << (found? "YES": "NO") << endl;

    }
}
