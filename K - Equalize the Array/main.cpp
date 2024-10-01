#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

int preprocess(const vector<int>& v) {
    map<int, int> mp;
    for (int num : v) {
        mp[num]++;
    }
    map<int, int> mostfreq;
    for (const auto& pair : mp) {
        mostfreq[pair.second]++;
    }
    int minRemovals = v.size();

    for (const auto& pair : mostfreq) {
        int freq = pair.first;

        int removals = 0;
        for (const auto& other : mostfreq) {
            if (other.first < freq) {
                removals += other.first * other.second;
            } else if (other.first > freq) {
                removals += (other.first - freq) * other.second;
            }
        }
        minRemovals = min(minRemovals, removals);
    }
    return minRemovals;
}

signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        cout << preprocess(v) << endl;
    }
    return 0;
}
