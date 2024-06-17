#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <climits>
#include <algorithm>
#include <stack>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL))

signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int see=(k-1)/(n-1);
        cout<<k+see<<endl;
    }
}
