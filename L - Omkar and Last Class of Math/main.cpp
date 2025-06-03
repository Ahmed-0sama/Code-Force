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
int lowest_Common_Divisor(int n) {
    if (n % 2 == 0) return 2;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return i;
    }
    return n;
}

signed main(){
    int t;cin>>t;
    while(t--){
        int ab;cin>>ab;
        int divisor = lowest_Common_Divisor(ab);
        cout << ab / divisor << " " << ab - ab/divisor << endl;
    }
}
