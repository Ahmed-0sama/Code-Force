#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int t;cin>>t;
    while (t--){
        int n,m;cin>>n>>m;
        n--;m--;
        int ans=1;
        if(m>n-m) m=n-m;
        for (int i = 0; i <m ; ++i) {
            ans=ans*(n-i)/(i+1);
        }
        cout<<ans<<endl;
    }
}