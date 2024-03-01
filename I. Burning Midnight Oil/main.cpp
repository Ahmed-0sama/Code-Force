#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, k;
    cin >> n >> k;
    ll l = 1, r = n;
    ll ans = INT_MAX;
    while (l <= r) {
        ll md = (l + r) / 2;
        ll sum = 0, x = 0;
        while (true) {
            sum += md / pow(k, x);
            if (md / pow(k, x) == 0)
                break;
            x++;
        }
        if (sum >= n) {
            ans = min(ans, md);
            r = md - 1;
        } else {
            l = md + 1;
        }
    }
    cout << ans;
    return 0;
}
