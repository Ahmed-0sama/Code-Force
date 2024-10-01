#include <iostream>
#include <vector>
#include <map>
#include <climits>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << -1 << endl;
        } else {
            vector<int> p(n);
            int left = 0, right = n - 1;
            int num = 1;
            while (left <= right) {
                p[left] = num;
                if (left != right) {
                    p[right] = num + 1;
                }
                left++;
                right--;
                num += 2;
            }
            for (int i = 0; i < n; ++i) {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}