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
    while (t--) {
        int n,k;
        cin >> n >> k;
        if(k==1){
            cout<<"YES"<<endl;
            for (int i = 1; i <=n ; ++i) {
                cout<<i<<endl;
            }
            continue;
        }
        if(n%2==1){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            for (int i = 1; i <=n ; ++i) {
                for (int j = i; j <=k*n ; j+=n) {
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
    }
}
