#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        string s;
        cin>>s;

        vector<int> pre(n+1, 0);
        for (int i = 1; i <= n; ++i) {
            pre[i] = pre[i-1] + (s[i-1] == '+' ? 1 : -1);
        }

        vector<int> premx(n+1), premn(n+1), sufmx(n+1), sufmn(n+1);
        premx[0] = premn[0] = 0;

        for (int i = 1; i <= n; ++i) {
            premx[i] = max(premx[i-1], pre[i]);
            premn[i] = min(premn[i-1], pre[i]);
        }

        sufmx[n] = sufmn[n] = pre[n];
        for(int i = n-1; i >= 1; --i){
            sufmx[i] = max(sufmx[i+1], pre[i]);
            sufmn[i] = min(sufmn[i+1], pre[i]);
        }

        while(q--){
            int l, r;
            cin>>l>>r;

            int mx = premx[l-1];
            int mn = premn[l-1];

            if(r < n) {
                mx = max(mx, sufmx[r + 1] - (pre[r] - pre[l - 1]));
                mn = min(mn, sufmn[r + 1] - (pre[r] - pre[l - 1]));
            }

            cout << mx - mn + 1 << '\n';
        }
    }
}
