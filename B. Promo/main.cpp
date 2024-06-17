#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    vector<ll>s(n+1, 0);
    for (ll i = 0; i <n ; ++i) {
        s[i+1]=s[i]+v[i];
    }

    while (q--) {
        ll x, y;
        cin >> x >> y;
        cout << s[x] - s[x-y] << endl;
    }

    return 0;
}
