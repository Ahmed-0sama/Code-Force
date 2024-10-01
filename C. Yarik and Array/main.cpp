#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
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
        int ans = a[0];
        int zero=0;
        int mn = min(zero, a[0]);
        int sum = a[0];
        for (int i = 1; i < n; ++i) {
            if (abs(a[i] % 2) == abs(a[i - 1] % 2)) {
                mn = 0;
                sum = 0;
            }
            sum += a[i];
            ans = max(ans, sum - mn);
            mn = min(mn, sum);
        }
        cout << ans << endl;
    }
    return 0;
}