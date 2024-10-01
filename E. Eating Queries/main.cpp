#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for(int i = 1; i < n; i++)
            v[i] += v[i - 1];

        while(q--){
            int x;
            cin >> x;
            int l = 0;
            int r = n - 1;
            int ans = -2;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (v[mid] >= x) {
                    r = mid - 1;
                    ans = mid;
                } else {
                   l=mid+1;
                }
            }
            ans++;
            cout << ans << endl;
        }
    }
    return 0;
}
