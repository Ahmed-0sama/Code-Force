#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    int minn = INT_MAX;
    int pos = 0;
    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i - 1] + v[i];
    }
    for (int i = 1; i <= n - m + 1; i++) {
        if (prefix[i + m - 1] - prefix[i - 1] < minn) {
            minn = prefix[i + m - 1] - prefix[i - 1];
            pos = i;
        }
    }
    cout << pos << endl;
}