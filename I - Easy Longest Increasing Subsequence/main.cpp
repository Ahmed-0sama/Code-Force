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
bool longest(const vector<int>& arr, int mask) {
    int prev = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (mask & (1 << i)) {
            if (arr[i] <= prev) {
                return false;
            }
            prev = arr[i];
        }
    }
    return true;
}
signed main() {
    fastread();
    int n;cin>>n;
    vector<int>arr(n);
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    int mx=0;
    for (int mask = 0; mask < (1 << n); ++mask) {
        if (longest(arr, mask)) {
            int count = __builtin_popcount(mask);
            mx = max(mx, count);
        }
    }
    cout<<mx<<endl;
}