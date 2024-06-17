#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        priority_queue<int, vector<int>, greater<int>> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push(x);
        }
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            a.pop();
            a.push(x);
        }
        int sum = 0;
        while (!a.empty()) {
            sum += a.top();
            a.pop();
        }
        cout << sum << endl;
    }

}