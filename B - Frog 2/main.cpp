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
int rec(int i,int k){
    if(i==n-1)return 0;
    if(dp[i]!=-1)return dp[i];
    int mn=INT_MAX;
    for (int j = 1; j <=k ; ++j) {
        if(i+j<=n-1){
            mn=min(mn,rec(i+j,k)+abs(v[i]-v[i+j]));
        }
    }
    dp[i]=mn;
    return mn;
}
signed main(){
    cin>>n;
    int k;cin>>k;
    fill(dp, dp + N, -1);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    cout<<rec(0,k)<<endl;
}