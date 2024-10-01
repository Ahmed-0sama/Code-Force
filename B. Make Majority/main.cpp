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
signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int c1 = 0, c0 = 0;
        if (s[0] == '1') {
            c1++;
        }
        else{
        c0++;
        }
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                if (s[i + 1] == '1') {
                    c1++;
                } else {
                    c0++;
                }
            } else if (s[i] == '1') {
                c1++;
            }
        }
        if (c1 > c0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
