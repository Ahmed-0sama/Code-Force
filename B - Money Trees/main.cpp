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

//*=========================>>>Main-Code<<<=========================
int solve(int n,vector<int>&fr,vector<int>&h){

}

signed main(){
    int t;cin>>t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ans=0;
        vector<int> fr(n);
        vector<int> h(n);
        for (int i = 0; i <n ; ++i) {
            cin>>fr[i];
        }
        for (int i = 0; i <n ; ++i) {
            cin>>h[i];
        }
        int l = 0, sum = 0;
        for (int i = 0; i < n; ++i) {
            if (h[i -1] % h[i] == 0) {
                sum += fr[i];
            } else {
                sum = fr[i];
                l = i;
            }
            while (sum > k) {
                sum -= fr[l];
                l++;
            }
            ans = max(ans, i - l+1);
        }
        cout << ans << endl;
    }
}