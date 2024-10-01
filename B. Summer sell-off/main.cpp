#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

struct day {
    int items;
    int clients;
};

bool benefitComparator(day a, day b) {
    return min(2 * a.items, a.clients) - min(a.items, a.clients) > min(2 * b.items, b.clients) - min(b.items, b.clients);
}

signed main() {
    fastread();
    int n, f;
    cin >> n >> f;
    vector<day> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].items >> v[i].clients;
    }
    sort(v.begin(), v.end(), benefitComparator);
    int ans = 0;

    for (int i = 0; i < f; ++i) {
        v[i].items *= 2;
    }
    for (int i = 0; i < n; i++) {
        ans += min(v[i].items, v[i].clients);
    }

    cout << ans << endl;

    return 0;
}
