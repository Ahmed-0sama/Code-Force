#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

bool isAlpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
signed main() {
    fastread();
    set<string> v;
    string inputLine;
    while (getline(cin, inputLine)) {
        transform(inputLine.begin(), inputLine.end(), inputLine.begin(), ::tolower);
        string word = "";
        for (char c : inputLine) {
            if (isAlpha(c)) {
                word += c;
            } else {
                if (!word.empty()) {
                    v.insert(word);
                    word = "";
                }
            }
        }
        if (!word.empty()) {
            v.insert(word);
        }
    }
    for (const string& word : v) {
        cout << word << endl;
    }
    return 0;
}
