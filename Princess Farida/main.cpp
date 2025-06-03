#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int n;
vector<int>dp(n,-1);
vector<int>v(n);
int rec(int i){
    if(i>=n)return 0;
    if(dp[i]!=-1)return dp[i];

    dp[i]=max(rec(i+1),rec(i+2)+v[i]);
    return dp[i];
}
signed main(){
    fastread();
    int t;cin>>t;
    for (int i = 1; i <=t; ++i) {
        cin >> n;
        dp.clear();
        v.clear();
        dp.resize(n, -1);
        v.resize(n);
        for (int j = 0; j < n; ++j) {
            cin >> v[j];
        }
        cout << "case "<<i<<": "<<rec(0) << endl;
    }
}