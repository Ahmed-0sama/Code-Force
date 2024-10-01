#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1000;
signed main(){

    fastread();
    int t;cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    if (n == 1) {
        cout << 0 << endl;
        continue;
    }
    int res=a[n-1]-a[0];
        for (int i = 1; i < n; ++i) {
            res = min(res, a[i] - a[i-1]);
        }

        res = min(res, a[n-1] - a[0]);
        res = min(res, a[n-2] - a[0]);
        res = min(res, a[n-1] - a[1]);

        cout << res << endl;
    }
}
