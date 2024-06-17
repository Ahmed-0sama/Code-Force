#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
typedef long long  ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll ans = 0;
        ll no = 1;
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] * no >= k) {
                ans++;
                no = 0;
            }
            no++;
            }
            cout << ans << endl;
        }
        return 0;
    }
