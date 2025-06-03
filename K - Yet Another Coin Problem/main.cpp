#include <bits/stdc++.h>
using namespace std;

#define int long long
#define The_end return 0
#define endl "\n"
const int MOD = 1e9 + 7;

//*=========================>>>Fast-IO-Functions<<<=================
void fastread() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

//*=========================>>>File-IO-Functions<<<=================
void fileIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

//*=========================>>>Main-Code<<<=========================

vector<int> f={0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3};
signed main() {
    int t;
    cin >> t;
    while(t--){
        int n; cin>>n;
        if(n<15) cout<<f[n]<<endl;
        else if(n%15==5) cout<<n/15+1<<endl;
        else if(n%15==8) cout<<n/15+2<<endl;
        else cout<<n/15+f[n%15]<<endl;
    }
}