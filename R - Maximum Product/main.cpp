#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
//const int N=1e4;
//int MOD=1e9+7;
//int dp[N][N];
//int n,weight;
//vector<vector<int>>v(n);
signed main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int option1 = v[n-1] * v[n-2] * v[n-3] * v[n-4] * v[n-5];

    int option2 = v[n-1] * v[n-2] * v[n-3] * v[0] * v[1];

    int option3 = v[n-1] * v[0] * v[1] * v[2] * v[3];
    cout<<max({option1,option2,option3})<<endl;
    }
}