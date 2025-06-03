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
signed main(){
    int t;cin>>t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        vector<int> m(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i].first >> v[i].second;
            m[i] = v[i].second;
        }
        sort(v.begin(), v.end());
        sort(m.begin(),m.end());
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            auto p = lower_bound(m.begin(), m.end(), v[i].second) - m.begin();
            ans += p;
            m.erase(m.begin() + p);
        }
        cout << ans << endl;
    }
}