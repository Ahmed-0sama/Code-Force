#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N=1e4;
int k;
int MOD=1e9+7;
int dp[N][N];
int n;
vector<int>v;
int solve(int i,int mod){
    if(i==n) return mod==0;
    if(dp[i][mod]!=-1)return dp[i][mod];
    bool res(solve(i+1,(mod+v[i]+k)%k)||solve(i+1,(mod-v[i]+k)%k));
    return dp[i][mod]=res;
}
signed main(){
    int t;cin>>t;
    while(t--) {
        cin >> n >> k;
        v.resize(n);
        memset(dp, -1, sizeof dp);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        solve(0, 0) ==1 ? cout << "Divisible" << endl : cout << "Not divisible" << endl;
    }
}