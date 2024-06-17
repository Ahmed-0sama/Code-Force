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
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int sum = 0;
        int a[n];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            if (i == a[a[i]]) {
                sum++;
                break;
            }
        }
        if (sum > 0) {
            cout << "2" << endl;
        } else {
            cout << "3" << endl;
        }
    }
    return 0;
}