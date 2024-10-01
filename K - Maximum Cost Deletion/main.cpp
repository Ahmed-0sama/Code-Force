#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main() {
    fastread();
    int t;cin>>t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 1; i < n; ++i) {
            if (s[i] != s[i - 1])cnt++;
        }
        cnt = (cnt + 1) / 2;//  x/y---y
        cnt++;
        if (b > 0)cout << n * a + n * b << endl;
        else {
            cout << n * a + (cnt * b) << endl;
        }

    }
}