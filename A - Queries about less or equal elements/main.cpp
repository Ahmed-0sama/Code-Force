#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main() {
    fastread();
    int n,m;cin>>n>>m;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int>vv(m);
    for (int i = 0; i <m ; ++i) {
        cin>>vv[i];
    }
    for (int i = 0; i <m ; ++i) {
        int l=0;int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if (v[mid] <= vv[i]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout<<++r<<" ";
    }
}