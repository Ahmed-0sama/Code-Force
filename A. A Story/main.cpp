#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 0, x; i < n + 1; i ++) {
            cin >> x;
            v[x] = i;
        }
        int x = 0;
        for (int i = 0; i < n; i ++) {
            cout << v[x] << ' ';
            x = v[x];
        }
        cout << endl;
    }
}