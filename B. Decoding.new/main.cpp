#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n;
    cin >> n;
    vector<char> v(n, ' ');
    string s;
    cin >> s;
    string ans ="";
    ans += s[0];
    s.erase(s.begin());

    while (!s.empty()) {
        if (s.length() % 2 == 0) {
            ans = s[0] + ans;
        } else {
            ans = ans + s[0];
        }
        s.erase(s.begin());
    }

    cout << ans << endl;
    return 0;
}