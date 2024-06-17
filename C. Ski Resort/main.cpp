#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main() {
    fastread();
    int t;
    cin >> t;
    while(t--){
    int n,k,q;
    cin >>n>>k>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        }
    int res=0;
    int c=0;
        for (int i = 0; i < n; ++i) {
            if(a[i]<=q){
                c++;

            }
            else{
                c=0;
            }
            int ze=0;
            res+=max(ze,c-k+1);
        }
        cout << res << endl;
    }
}