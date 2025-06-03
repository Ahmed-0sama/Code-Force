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
    int t;cin>>t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(n + 1, 0);
        vector<int> b(n + 1, 0);
        for (int i = 1; i <= n; i++) cin >> v[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
        reverse(v.begin() + 1, v.end());
        reverse(b.begin() + 1, b.end());
        int ans = 1e18;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i >= n - m + 1) {
                ans = min(ans, v[i] + sum);
            }
            sum += min(v[i], b[i]);
        }
        cout << ans << endl;
    }
}