#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
signed main(){
    fastread();
    int n;cin>>n;
    vector<int>v(n);
    int mx=INT_MIN;
    for (int i = 0; i <n ; ++i) {
        int x;cin>>x;
        v[i]=x;
        mx=max(x,mx);
    }
    vector<int> ans(100, 0);
    for (int i = 0; i <n ; ++i) {
        ans[v[i]]++;
    }
    for (int i = 0; i <100 ; ++i) {
        cout<<ans[i]<<' ';
    }
}