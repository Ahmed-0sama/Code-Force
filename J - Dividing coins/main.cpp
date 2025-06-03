#include <vector>
#include <bits/stdc++.h>
using namespace std;

//#define endl '\n'
//#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N = 101;
const int INF = LLONG_MIN;
//int MOD=1e9+7;
const int MAX_SUM = 500 * N;
int dp[N][MAX_SUM];

vector<int>v;
int n;
int solve(int i,int diff,int total ){
    if(i==n)return abs(diff);
    if (dp[i][diff + total] != -1) return dp[i][diff + total];
    int ans = solve(i + 1, diff + v[i], total);
    ans = min(ans,solve(i + 1, diff - v[i], total));
    return dp[i][total+diff]=ans;
}
signed main(){
    fastread();
    int t;cin>>t;
    while(t--) {
        cin >> n;
        v.clear();
        v.resize(n);
        memset(dp, -1, sizeof dp);
        int total=0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            total+=v[i];
        }
        cout << solve(0, 0, total/2) << endl;
    }
}