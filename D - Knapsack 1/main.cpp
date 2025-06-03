#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const int N = 100;
const int W = 1e5;
int n;
int weight;
int dp[N][W+1];
int v[N][2];

int rec(int i,int w){
    if(i==n)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    if(w>weight)return 0;
    int ans=rec(i+1,w);
    if(w+v[i][0]<=weight){
        ans=max(rec(i+1,w+v[i][0])+v[i][1],ans);
    }
    return dp[i][w]=ans;
}
signed main(){
    fastread();
    cin>>n>>weight;
    memset(dp,-1,sizeof dp);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i][0]>>v[i][1];
    }
    cout<<rec(0,0)<<endl;
}