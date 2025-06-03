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
bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;
        vector<pair<int, int>> ans;
        pair<int, int> me;
        for (int i = 0; i < n; ++i) {
            vector<int> v(m);
            for (int j = 0; j < m; ++j) {
                cin >> v[j];
            }
            sort(v.begin(), v.end());

            int time = 0, points = 0, penalty = 0;
            for (int j = 0; j < m; ++j) {
                if (time + v[j] <= h) {
                    time += v[j];
                    penalty += time;
                    points++;
                } else {
                    break;
                }
            }
                if (i == 0) {
                    me = {points, penalty}; // Save Rudolf's result
                } else {
                    ans.push_back({points, penalty}); // Other participants
                }
            }



    sort(ans.begin(), ans.end(), comp);
//    for (int i = 0; i <n ; ++i) {
//        cout<<ans[i].first<<" "<<ans[i].second<<endl;
//    }
//    cout<<endl;
        int rank = 1;
//        cout<<me.first<<" "<<me.second<<endl;
        for (auto p : ans) {
            if (p.first > me.first || (p.first == me.first && p.second < me.second)) {
                rank++;
            }
        }
            cout << rank << endl;
        }
    The_end;
}