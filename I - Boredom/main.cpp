#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N = 1e6;
const int INF = LLONG_MIN;
//int MOD=1e9+7;
int dp[N+1];
int freq[N+1];
int n;
vector<int>v;
int solve(int i){
    if(i>N)return 0;
    if(dp[i]!=-1)return dp[i];
    int res=solve(i + 1);
    res=max(res,solve(i+2)+(i*freq[i]));
    return dp[i]=res;
}
signed main(){
    cin>>n;
    v.resize(n);
    memset(dp,-1,sizeof dp);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
        freq[v[i]]++;
    }
    cout<<solve(1)<<endl;
}