#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL))

signed main() {
    fastread();
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    map<int, int> freq_count;
    for (auto &entry : mp) {
        freq_count[entry.second]++;
    }

    if (freq_count.size() == 1) {
        cout << "YES" << endl;
        return 0;
    }

    if (freq_count.size() > 2) {
        cout << "NO" << endl;
        return 0;
    }
    auto it = freq_count.begin();
    int freq1 = it->first;
    int count1 = it->second;
    ++it;
    int freq2 = it->first;
    int count2 = it->second;

    if ((count1 == 1 && (freq1 - 1 == freq2 || freq1 - 1 == 0)) ||
        (count2 == 1 && (freq2 - 1 == freq1 || freq2 - 1 == 0))) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
