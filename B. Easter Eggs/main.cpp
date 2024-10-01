#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n;
    cin >> n;
    char container[7] = {'G', 'B', 'I', 'V'};
    string ans = "ROY";
    cout<<ans;
    for (int i = 3; i < n; i++) {
        cout << container[i % 4];
    }
    cout << endl;
    return 0;
}