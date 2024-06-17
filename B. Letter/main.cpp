#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main() {
    fastread();
    string s, s1;
    getline(cin, s);
    getline(cin, s1);

    map<char, int> mp;

    for (auto i : s) {
        if (isalpha(i)) {
            mp[i]++;
        }
    }

    bool flag = true;
    for (auto i : s1) {
        if (isalpha(i)) {
            if (mp.find(i) != mp.end()) {
                mp[i]--;
                if (mp[i] == 0) {
                    mp.erase(i);
                }
            } else {
               flag = false;
                break;
            }
        }
    }

    cout << (flag? "YES" : "NO") << endl;

    return 0;
}
