#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main() {
    fastread();
    int t;cin>>t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        vector<int> v1(m);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> v1[i];
            v1[i]--;
        }
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < m; ++i) {
            int pos = v1[i];
            if (v[pos] > v[pos + 1]) {
                swap(v[pos], v[pos + 1]);
                sorted = false;
            }
        }
    }
        bool flag = true;
        for (int j = 0; j < n - 1; ++j) {
            if (v[j] > v[j + 1]) {
                flag = false;
                break;
            }

        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
}