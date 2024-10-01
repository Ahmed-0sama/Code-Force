#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main() {
    fastread();
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    set<pair<int, int>> waste;
    for (int i = 0; i < k; ++i) {
        int a, b;
        cin >> a >> b;
        waste.insert({a - 1, b - 1});
    }

    while (t--) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        int waste_count = 0;
        for (auto& p : waste) {
            if (p.first < a || (p.first == a && p.second < b)) {
                waste_count++;
            } else {
                break;
            }
        }
        int total = a * m + b - waste_count;
        if (waste.find({a, b}) != waste.end()) {
            cout << "Waste" << endl;
        } else {
            int crop = total % 3;
            if (crop == 0) {
                cout << "Carrots" << endl;
            } else if (crop == 1) {
                cout << "Kiwis" << endl;
            } else {
                cout << "Grapes" << endl;
            }
        }
    }
    return 0;
}
