#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed  main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n;
        cin >> n;
        map<char, int> m;
        int sum = 0;
        int sz = s.size();

        for (int i = 0; i < sz; i++) {
            sum += s[i] - 'a' + 1;
            m[s[i]]++;
        }

        if (sum <= n) {
            cout << s << endl;
        } else {
            string result;
            for (char c = 'z'; c >= 'a'; c--) {
                while (m[c] && sum > n) {
                    m[c]--;
                    sum -= c - 'a' + 1;
                }
            }
            for (int i = 0; i < sz; i++) {
                if (m[s[i]]) {
                    m[s[i]]--;
                    result += s[i];
                }
            }
            cout << result << endl;
        }
    }

    return 0;
}
