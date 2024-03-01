#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    typedef pair<int, int> Pair;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;

    vector<Pair> v;
    vector<ll> ans;

    for (int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        v.emplace_back(x, y);
    }

    sort(v.begin(), v.end());

    ll temp = 0;
    for (int i = 0; i < n - 1; i++) {
        if (v[i + 1].first <= v[temp].second) {
            v[temp].second = max(v[i + 1].second, v[temp].second);
            v[i + 1].first = 0;
            v[i + 1].second = 0;
        } else {
            temp = i + 1;
        }
    }

    for (const auto& it : v) {
        if (it.first != 0 && it.second != 0) {
            ans.emplace_back(it.first);
            ans.emplace_back(it.second);
        }
    }

    ll q;
    cin >> q;

    while (q--) {
        ll x, y;
        cin >> x >> y;
        ll mx = max(x, y);
        ll mn = min(x, y);
        auto a = lower_bound(ans.begin(), ans.end(), mx) - ans.begin();
        auto b = lower_bound(ans.begin(), ans.end(), mn) - ans.begin();

        if ((a - b == 1 && mn >= ans[b] && mx <= ans[a]) || (a - b == 0 && a % 2 == 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
