#include <vector>
#include <bits/stdc++.h>
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
    while(t--){
        int n;
        cin>>n;
        int alice=0;
        int bob=0;
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        int end=n-1;
        int ans=0;
        for (int i = 0; i <n ; ++i) {
            alice+=v[i];
            while(bob<alice){
                bob+=v[end];
                end--;
            }
            if(alice==bob&&i<=end){
                ans=max(ans,i+n-end);
            }
        }
        cout<<ans<<endl;
    }
}