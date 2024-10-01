#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ans = 0;
        for (int i = 0; i <n ; ++i) {
            int x;
            cin >> x;
            ans ^= x;
        }
        cout << ans << endl;
    }
}