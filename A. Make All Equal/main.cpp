#include <iostream>
#include <vector>
#include <map>
#include <climits>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main() {
    fastread();
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int, int> freq_map;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            freq_map[x]++;
        }
        int mx=0;
        for(auto i:freq_map){
            mx=max(mx,i.second);
        }
        int ans=n-mx;
        cout<<ans<<endl;
    }
}
