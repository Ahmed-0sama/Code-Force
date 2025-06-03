#include <bits/stdc++.h>
using namespace std;
#define int long long
#define The_end return 0
#define endl "\n"
const int MOD = 1e9 + 7;
//*=========================>>>Fast-IO-Functions<<<=================
void fastread()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
//*=========================>>>File-IO-Functions<<<=================
void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//*=========================>>>Utility-Templates<<<=================
template <typename T> T GCD(T vec, T b) { return (b == 0 ? vec : GCD(b, vec % b)); }
template <typename T> T LCM(T vec, T b) { return (vec / GCD(vec, b) * b); }
template <typename T> T factorial(T n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
template <typename T> T fibonacci(T n) { return n <= 1 ? n : fibonacci(n - 1) + fibonacci(n - 2); }
template <typename T> T maxthree(T vec, T b, T c) { return max(vec, max(b, c)); }
template <typename T> T minthree(T vec, T b, T c) { return min(vec, min(b, c)); }
template <typename T> T maxfour(T vec, T b, T c, T d) { return max(max(vec, b), max(c, d)); }
template <typename T> T minfour(T vec, T b, T c, T d) { return min(min(vec, b), min(c, d)); }

//*=========================>>>Main-Code<<<=======================

signed main() {
    int t;cin>>t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v1(n);
        vector<pair<int, int>> v2(n);
        vector<pair<int, int>> v3(n);
        for (int i = 0; i < n; ++i) {
            cin >> v1[i].first;
            v1[i].second = i;
        }
        for (int i = 0; i < n; ++i) {
            cin >> v2[i].first;
            v2[i].second = i;
        }
        for (int i = 0; i < n; ++i) {
            cin >> v3[i].first;
            v3[i].second = i;
        }
        sort(v1.rbegin(), v1.rend());
        sort(v2.rbegin(), v2.rend());
        sort(v3.rbegin(), v3.rend());
        vector<pair<int, int>> v11(3);
        vector<pair<int, int>> v22(3);
        vector<pair<int, int>> v33(3);
        for (int i = 0; i < 3; ++i) {
            v11[i] = v1[i];
            v22[i] = v2[i];
            v33[i] = v3[i];
        }
        int ans = 0;
        for (int i = 0; i < v11.size(); ++i) {
            int index1 = v11[i].second;
            int ans1 = v11[i].first;
            int mx = INT_MIN;
            for (int j = 0; j < v22.size(); ++j) {
                int index2 = v22[j].second;
                if (index1 == index2) continue;

                int ans2 = ans1 + v22[j].first;

                for (int k = 0; k < v33.size(); ++k) {
                    int index3 = v33[k].second;
                    if (index2 == index3 || index1 == index3) continue;

                    int totalAns = ans2 + v3[k].first;
                    mx = max(mx, totalAns);
                }
            }
            ans = max(ans, mx);
        }
        cout << ans << endl;
    }
    The_end;
}