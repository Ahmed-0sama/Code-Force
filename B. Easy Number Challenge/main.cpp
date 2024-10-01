#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <iomanip>
#include <set>
#include <cmath>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
int divistors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;

}
signed main(){
        fastread();
        int n, m, k;
        cin >> n >> m >> k;

        int maxSize = n * m * k;
        vector<int> dp(maxSize + 1, -1);
        int ans = 0;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                for (int l = 1; l <= k; ++l) {
                    int index = i * j * l;
                    if (dp[index] == -1) {
                        dp[index] = divistors(index);
                        ans += dp[index];
                    }
                    else {
                        ans += dp[index];
                    }
                }
            }
        }
        ans = ans % 1073741824;
        cout << ans << endl;

    }