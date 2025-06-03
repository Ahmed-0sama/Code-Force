#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N=1e6;
int MOD=1e9+7;
int dp[N][3+1];
int n;
vector<vector<int>>v(n);

int solve(int i,int flag){
    if(i==n) return 0;
    if(dp[i][flag]!=-1)return dp[i][flag];
    int res=INT_MIN;
    for (int j = 0; j <3 ; ++j) {
        if(j!=flag){
            res=max(solve(i+1,j)+v[i][j],res);
        }
    }
    return dp[i][flag]=res;
}

bool preceed(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first)return a.second<b.second;
    return a.first>b.first;
}
signed main(){
    cin>>n;
    memset(dp,-1,sizeof dp);
    v.resize(n,vector<int>(3));
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <3 ; ++j) {
            cin>>v[i][j];
        }
    }
    cout<<solve(0,3)<<endl;
}