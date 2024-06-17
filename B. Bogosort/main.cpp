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
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
       }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

        for (int i = 0; i <n ; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}