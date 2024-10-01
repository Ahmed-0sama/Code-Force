#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n), mx(n);
        int val = 0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            val = max(val, v[i]);
            mx[i] = val;
        }
        int r = n - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] == mx[i]) {
                for (int j = i; j <= r; ++j) {
                    cout << v[j] << " ";
                }
                r = i - 1;
            }
        }
        cout << endl;
    }
    return 0;
}
