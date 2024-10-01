#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))

signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        vector<int> ids(n);
        for (int i = 0; i < n; ++i) {
            cin >> ids[i];
        }
        unordered_map<int, vector<char>> s_map, t_map;

        for (int i = 0; i < n; ++i) {
            s_map[ids[i]].push_back(s[i]);
            t_map[ids[i]].push_back(t[i]);
        }
        bool can_convert = true;
        for (const auto& pair : s_map) {
            int id = pair.first;
            vector<char> s_chars = pair.second;
            vector<char> t_chars = t_map[id];

            sort(s_chars.begin(), s_chars.end());
            sort(t_chars.begin(), t_chars.end());

            if (s_chars != t_chars) {
                can_convert = false;
                break;
            }
        }
        cout << (can_convert ? "YES" : "NO") << endl;
    }
    return 0;
}
