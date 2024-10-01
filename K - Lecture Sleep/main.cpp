#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main(){
    fastread();
    int n,k;cin>>n>>k;
    vector<int>v(n);
    vector<int>time(n);
    vector<int>prefix(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    for (int i = 0; i <n ; ++i) {
        cin>>time[i];
    }
    int mx=INT_MIN;
    int x=0;
    for (int i = 0; i <n ; ++i) {
        if(time[i]==1){
            x+=v[i];
            v[i]=0;
        }
    }
    prefix[0]=v[0];
    for (int i = 1; i <n ; ++i) {
        prefix[i]=prefix[i-1]+v[i];
    }
    for (int i = 0; i <= n - k; ++i) {
        int ans;
        if (i == 0) {
            ans = prefix[k - 1];
        } else {
            ans = prefix[k + i - 1] - prefix[i - 1];
        }
        mx=max(mx,ans);
    }
    int fin=mx+x;
    cout<<fin<<endl;
}