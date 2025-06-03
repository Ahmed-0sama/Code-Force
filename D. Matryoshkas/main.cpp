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
bool compgert(pair<int, int> x, pair<int, int> y) {
    return x.first < y.first; // Descending order
}
bool compgsmal(pair<int,int>x,pair<int,int>y){
    return x.first<y.first;
}
signed main() {
    fastread();
    int t;cin>>t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            mp[x]++;
        }
        int cnt = 0;
        auto prev = mp.begin();
        for (auto it = mp.begin(); it != mp.end(); ++it) {
        if (it != mp.begin()) {
            if (it->first - prev->first == 1) {
                if(it->second>prev->second){
                    cnt+=it->second-prev->second;
                }
            } else {
                cnt += it->second;
            }
        } else {
            cnt += it->second;
        }
        prev = it;
    }
        cout << cnt << endl;
    }
}