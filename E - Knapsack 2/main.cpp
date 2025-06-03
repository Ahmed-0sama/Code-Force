#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N=1e2+5;
#define inf (int)1e12+5
int n,W;
int v[N],w[N],dp[N][100001];
int solve(int ind,int V){
    if(V<0)
        return inf;
    int &ans=dp[ind][V];
    if(ans!=-1) return ans;
    if(ind==n){
        if(V==0)
            return ans=0;
        else
            return ans=inf;
    }
    else
        return ans=min(w[ind]+solve(ind+1,V-v[ind]),solve(ind+1,V));
}
signed main(){
    fastread();
    cin>>n>>W;
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    memset(dp,-1,sizeof dp);
    for(int i=100000;i>=0;i--){
        if(solve(0,i)<=W)
            return cout<<i<<"\n",0;
    }
    return 0;
}