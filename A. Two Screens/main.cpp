#include <vector>
#include <bits/stdc++.h>
using namespace std;

//#define endl '\n'
//#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N = 101;
//const int INF = LLONG_MIN;
//int MOD=1e9+7;
//const int MAX_SUM = 500 * N;
//int dp[N][MAX_SUM];
//vector<int>v;
//int n;
signed main(){
    int t;cin>>t;
    while(t--) {
        string s;cin >> s;
        string t;cin >> t;
        int cnt = 0;
        for (int i = 0; i < min(s.length(), t.length()); ++i) {
            if (s[i] == t[i]) {
                cnt++;
            } else {
                break;
            }
        }
        int ans = cnt + (s.length() - cnt) + (t.length() - cnt);
        if (cnt != 0)ans++;
        cout << ans << endl;
    }
}