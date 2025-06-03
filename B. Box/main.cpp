#include <bits/stdc++.h>
using namespace std;
#define int long long
#define The_end return 0
#define endl "\n"
const int MOD = 1e9 + 7;
//*=========================>>>Fast-IO-Functions<<<=================
void fastread()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
//*=========================>>>File-IO-Functions<<<=================
void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

//*=========================>>>Main-Code<<<=======================
signed main() {
    fastread();
    int t;cin>>t;
    while (t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        for (int i = 0; i < n - 1; ++i) {
            if (v[i] == v[i + 1]) {
                if(v[i]==v[i-n-1]){
                    swap(v[i+1],v[n-i-1]);
                }
                else{
                    swap(v[i],v[n-i]);
                }
            }
        }
        int cnt = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (v[i] == v[i + 1])cnt++;
        }
        cout << cnt << endl;
    }
}
