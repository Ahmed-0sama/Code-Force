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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        map<int, int> mp;
        for (auto i: v) {
            mp[i]++;
        }
        vector<int> ans;
        for (auto i: mp)
            if (i.second == 1) {
                ans.push_back(i.first);
            }
        sort(ans.begin(), ans.end());
        if (ans.size() >= 2) {
            mp[ans[1]] = 0;
        }
        int res = 0;
        while (mp[res] > 0) {
            res++;
        }
        cout << res<<endl;
    }
}