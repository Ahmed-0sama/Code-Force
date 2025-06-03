#include <vector>
#include <bits/stdc++.h>
using namespace std;

//#define endl '\n'
//#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N = 1e5+7;
const int INF = INT_MAX;
//int MOD=1e9+7;
const int MAX_SUM = 500 * N;
int dp[N][2];

vector<pair<int,int>>v;
int n;
int solve(int i,int last,int s){
    if(i==n)return 0;
    int x=v[i].first;
    int h=v[i].second;
    if(dp[i][s]!=-1)return dp[i][s];
    int leave= solve(i+1,x,0);
    int left=0;
    if(x-h>last){
        left=solve(i+1,x,0)+1;
    }
    int right=0;
    if(i==n-1||x+h<v[i+1].first){
        right= solve(i+1,x+h,1)+1;
    }
    int ans=max({left, right, leave});
    return dp[i][s]=ans;
}
signed main(){
    cin>>n;
    v.resize(n);
    memset(dp,-1,sizeof dp);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i].first>>v[i].second;
    }
    cout<<solve(1,v[0].first,0)+1<<endl;
}