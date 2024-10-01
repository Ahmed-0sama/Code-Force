#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
bool canBakeCookies(int mid, int n, int k, const vector<int>& a, const vector<int>& b) {
    int powder = 0;
    for (int i = 0; i < n; i++) {
        int total_required =  mid * a[i];
        if (total_required > b[i]) {
            powder += total_required - b[i];
        }
        if (powder > k) {
            return false;
        }
    }
    return powder <= k;
}

signed main() {
        fastread();
        int n,k;cin>>n>>k;
        vector<int>req(n);
        vector<int>has(n);
        for (int i = 0; i <n ; ++i) {
            cin>>req[i];
        }
        for (int i = 0; i <n ; ++i) {
            cin>>has[i];
        }
        int low=0;int high=2e9;
        int ans=0;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if (canBakeCookies(mid, n, k, req, has)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << ans << endl;
}
