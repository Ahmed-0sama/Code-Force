#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1e6;
int n;
int dp[N];
int v[N];
int rec(int i){
    if(i==n-1)return 0;
    if(dp[i]!=-1)return dp[i];
    int ans=min(rec(i+1)+abs(v[i+1]-v[i]),N);
    if(i+2<=n-1){
         ans= min(rec(i+2)+abs(v[i+2]-v[i]),ans);
    }
    dp[i]=ans;
    return ans;

}
signed main(){
    fastread();
    cin>>n;
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    fill(dp, dp + N, -1);
    cout<<rec(0)<<endl;

}