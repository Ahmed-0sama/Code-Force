#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define endl '\n'
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

bool isMatch(const string &str, const string &pattern) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (pattern[i] != '?' && pattern[i] != str[i]) {
            return false;
        }
    }
    return true;
}

signed main() {
    fastread();
    int n, q;
    cin >> n >> q;

    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    for (int i = 0; i < q; ++i) {
        string x;
        cin >> x;
        vector<string> matched;
        for (const string &stored : s) {
            if (isMatch(stored, x)) {
                matched.push_back(stored);
            }
        }
        if (matched.empty()) {
            cout << "No match found" << endl;
        } else {
            sort(matched.begin(), matched.end());
            for (const string &match : matched) {
                cout << match << endl;
            }
        }
    }

    return 0;
}
