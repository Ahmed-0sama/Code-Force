#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <climits>
#include <algorithm>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL))

signed main(){
    fastread();
    int t;
    cin >> t;
    while (t--) {
        string s = "ABCDEFG";
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        int ans = 0;
        for (char i : s) {
            int count_i = count(a.begin(), a.end(), i);
            ans += max(0LL, m - count_i);
        }
        cout << ans << endl;
    }
    return 0;
}
