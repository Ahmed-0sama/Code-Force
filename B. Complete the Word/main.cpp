#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <deque>
#include <climits>
#include <set>
#include <map>
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;

bool isValid(map<char, int>& mp, int question) {
    int unique_chars = mp.size();
    return (unique_chars + question) == 26;
}

signed main() {
    fastread();
    string s;
    cin >> s;
    int n = s.length();
    if (n < 26) {
        cout << "-1" << endl;
        return 0;
    }

    for (int i = 0; i <= n - 26; ++i) {
        map<char, int> mp;
        int question = 0;

        for (int j = i; j < i + 26; ++j) {
            if (s[j] == '?') {
                question++;
            } else {
                mp[s[j]]++;
            }
        }

        if (isValid(mp, question)) {
            set<char> used;
            for (auto &p : mp) {
                used.insert(p.first);
            }

            int idx = 0;
            for (int j = i; j < i + 26; ++j) {
                if (s[j] == '?') {
                    while (used.find('A' + idx) != used.end()) {
                        idx++;
                    }
                    s[j] = 'A' + idx;
                    used.insert('A' + idx);
                }
            }

            for (char &ch : s) {
                if (ch == '?') {
                    ch = 'A';
                }
            }
            cout << s << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}
