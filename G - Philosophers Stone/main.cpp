#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N = 100;
const int INF = LLONG_MIN;
//int MOD=1e9+7;
int dp[N][N];
vector<vector<int>> v;
int solve(int i,int j ,int n, int m){
    if (i == n) return 0;
    if (j < 0 || j >= m) return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int ans = v[i][j];
    ans += max({
     solve(i + 1, j, n, m),
     solve(i + 1, j - 1, n, m),
     solve(i + 1, j + 1, n, m)
               });
    return dp[i][j]=ans;
}
signed main(){
    fastread();
    int t;cin>>t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        v.clear();
        memset(dp, -1, sizeof dp);
        v.resize(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> v[i][j];
            }
        }
        int result = 0;
        for (int j = 0; j < m; ++j) {
            result = max(result, solve(0, j,n,m));
        }
        cout << result << endl;
    }
}