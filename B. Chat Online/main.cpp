#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

signed main() {
    fastread();
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<int> a(p), b(p);
    vector<int> v(1004,0);

    for (int i = 0; i < p; ++i) {
        cin >> a[i] >> b[i];
    }
    int count = 0;
    while(q--){
        int c, d;
        cin >> c >> d;
        for (int j = 0; j < p; ++j) {
            int x = a[j] - d;
            int y = b[j] - c;
            if (y < l || x > r) {
                continue;
            }
            for (int k = max(x, l); k <= min(y, r); ++k) {
                if (!v[k]) {
                    count++;
                    v[k] = 1;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
