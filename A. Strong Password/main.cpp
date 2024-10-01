#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int time(const string &s) {
    if (s.empty()) return 0;
    int time = 2; // time for the first character
    for (size_t i = 1; i < s.size(); ++i) {
        time += (s[i] == s[i - 1]) ? 1 : 2;
    }
    return time;
}

signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int mx = 0;
        string ans;
        for (char c = 'a'; c <= 'z'; ++c) {
            for (size_t i = 0; i <= s.size(); ++i) {
                string ss = s;
                ss.insert(ss.begin() + i, c);
                int new_time = time(ss);
                if (new_time > mx) {
                    mx = new_time;
                    ans = ss;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
