#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <iomanip>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

signed main() {
    fastread();
    int vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;
    double princes_place=vp*t;
    int count=0;
    if (vd <= vp) {
        cout << 0 << endl;
        return 0;
    }
    while (princes_place < c) {
        double time_to_meet = princes_place / (vd - vp);
        princes_place += time_to_meet * vp;
        if (princes_place >= c) {
            break;
        }
        double time_back = (princes_place / vd) + f;
        princes_place += time_back * vp;
        count++;
    }
    cout << count << endl;
}