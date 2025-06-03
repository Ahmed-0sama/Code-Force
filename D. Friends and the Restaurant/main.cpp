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
bool preceed(pair<int,int>a,pair<int,int>b){
    return (a.second-a.first)<(b.second-b.first);
}
signed main() {
    int t;cin>>t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i].first;
        }
        for (int i = 0; i < n; ++i) {
            cin >> v[i].second;
        }
        sort(v.begin(), v.end(), preceed);
//        for (int i = 0; i < n; ++i) {
//            cout << v[i].first << " " << v[i].second << endl;
//        }
        int cnt = 0;
        int l = 0, r = n-1;
        while (l < r) {
            if (v[l].second + v[r].second >= v[l].first + v[r].first) {
                cnt++;
                l++, r--;
            } else {
                l++;
            }
        }
        cout << cnt << endl;
    }
}