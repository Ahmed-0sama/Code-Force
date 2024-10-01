#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

signed main() {
    fastread();
    int t;
    cin >> t;

    map<string, string> m;m["01"] = "05";m["02"] = "10";m["03"] = "15";m["04"] = "20";m["05"] = "25";m["06"] = "30";m["07"] = "35";m["08"] = "40";m["09"] = "45";m["10"] = "50";m["11"] = "55";m["12"] = "00";

    while (t--) {
        string s;
        cin >> s;

        size_t pos = s.find(':');
        string displayedHour = s.substr(0, pos);
        string displayedMinute = s.substr(pos + 1);
        string originalMinute = m[displayedHour];
        string originalHour = "";
        for (const auto& pair : m) {
            if (pair.second == displayedMinute) {
                originalHour = pair.first;
                break;
            }
        }
        cout << originalHour << ":" << originalMinute << endl;
    }

    return 0;
}
