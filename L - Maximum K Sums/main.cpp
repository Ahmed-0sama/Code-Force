#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main() {
    fastread();

        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            sum += v[i];
        }
        set<pair<int, pair<int, int>>, greater<>> st;
        st.insert({sum, {0, n - 1}});

        while (k--) {
            auto it = st.begin();
            int val = it->first;
            int l = it->second.first;
            int r = it->second.second;

            cout << val << ' ';
            st.erase(it);
            st.insert({val - v[l], {l + 1, r}});
            st.insert({val - v[r], {l, r - 1}});
            }
}
