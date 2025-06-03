#include <bits/stdc++.h>
using namespace std;
#define int long long
#define The_end return 0
#define endl "\n"
const int MOD = 1e9 + 7;

void fastread() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void fileIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

signed main() {
    //fileIO();  // If using file I/O, otherwise remove this line
    vector<int> v(11, 0);

    // Input 10 lines of XXXXXXXXXX
    for (int i = 0; i < 10; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < 10; ++j) {
            if (s[j] == 'X') v[j+1]++;  // Increment corresponding index in vector
        }
    }

    int ans = 0;
    for (int i = 1; i <=5; ++i) {
        ans += (i * (v[i] + v[11-i]));
    }

    cout << ans << endl;
    The_end;
}
