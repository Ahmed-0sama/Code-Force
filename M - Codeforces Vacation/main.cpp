#include <vector>
#include <bits/stdc++.h>
using namespace std;

//#define endl '\n'
//#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N = 101;
const int INF = INT_MAX;
//int MOD=1e9+7;
const int MAX_SUM = 500 * N;
int dp[N][4];

vector<int>v;
int n;
int solve(int i,int flag){
    if(i==n)return 0;
    if(dp[i][flag]!=-1)return dp[i][flag];
    int ans=INF;
    if (v[i]== 0) {
        ans = solve(i + 1, 0) + 1;
    }
    else if (v[i] == 3) {

        if (flag != 1) ans = min(ans, solve(i + 1, 1));
        if (flag != 2) ans = min(ans, solve(i + 1, 2));
    }
    else{
        if(v[i]!=flag)ans=solve(i+1,v[i]);
        else ans=solve(i+1,0)+1;
    }
    return dp[i][flag]=ans;
}
signed main(){
    cin>>n;
    v.resize(n);
    memset(dp,-1,sizeof dp);
    for (int i = 0; i <n; ++i) {
        cin>>v[i];
    }
    cout<<solve(0,0)<<endl;
}