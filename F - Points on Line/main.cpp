#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <deque>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int c(int a) {
    return a * (a - 1) / 2ll;
}
signed main() {
    fastread();
    int n,m;cin>>n>>m;
    vector<int>v(n+1);
    for (int i = 1; i <=n ; ++i) {
        cin>>v[i];
    }

   int  res = 0;
    for (int k = 1, i = 1; k <= n; k++)
    {
        while (v[i] < v[k] - m)i++;
        res += c(k - i);
    }
    cout << res << endl;
}