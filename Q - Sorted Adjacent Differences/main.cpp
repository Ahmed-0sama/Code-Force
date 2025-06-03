#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

signed main() {
    fastread();
    int t;cin>>t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        int mid = n / 2;
        ans.push_back(v[mid]);
        int l = mid - 1;
        int r = mid + 1;
        while (l >= 0 || r < n) {
            if (l >= 0) {
                ans.push_back(v[l]);
                l--;
            }
            if (r < n) {
                ans.push_back(v[r]);
                r++;
            }
        }
        for (auto x: ans) {
            cout << x << " ";
        }
        cout << endl;
    }
}