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
    cin>>n;
    vector<int>v1(n);
    vector<int>v2(n);
    int count=0;
    for (int i = 0; i <n ; ++i) {
        cin>>v1[i];
        count+=v1[i];
    }
    int count2=0;
    for (int i = 0; i <n ; ++i) {
        cin>>v2[i];
        count2+=v2[i];
    }
    vector<int> diff(n);
    for (int i = 0; i < n; ++i) {
        diff[i] = v1[i] - v2[i];
    }
    sort(diff.rbegin(), diff.rend());
    int sum = 0;
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        sum += diff[i];
        if (sum >= 0) {
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;

}