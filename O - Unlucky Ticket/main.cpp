#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

signed main() {
    fastread();
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> first, sec;
    for (int i = 0; i < n; ++i) {
        first.push_back(s[i] - '0');
        sec.push_back(s[n + i] - '0');
    }

    sort(first.begin(), first.end());
    sort(sec.begin(), sec.end());
    bool allGreater = true;
    bool allLess = true;

    for (int i = 0; i < n; ++i) {
        if (first[i] <= sec[i]) {
            allGreater = false;
        }
        if (first[i] >= sec[i]) {
            allLess = false;
        }
    }

    if (allGreater || allLess) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
