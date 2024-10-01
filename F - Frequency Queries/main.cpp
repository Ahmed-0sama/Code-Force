#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main() {
    fastread();

    map<int, int> mp;
    map<int, int> count;

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;

        if (x == 1) {
            int num;
            cin >> num;
            if (mp[num] > 0) {
                count[mp[num]]--;
                if (count[mp[num]] == 0) {
                    count.erase(mp[num]);
                }
            }
            mp[num]++;
            count[mp[num]]++;

        } else if (x == 2) {
            int num;
            cin >> num;
            if (mp[num] > 0) {
                count[mp[num]]--;
                if (count[mp[num]] == 0) {
                    count.erase(mp[num]);
                }
                mp[num]--;

                if (mp[num] > 0) {
                    count[mp[num]]++;
                }
            }
        } else if (x == 3) {
            int num;
            cin >> num;
            if (count.find(num) != count.end() && count[num] > 0) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }
    return 0;
}
