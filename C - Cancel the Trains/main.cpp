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
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        set<int>s;
        for (int i = 0; i <n ; ++i) {
            int x;cin>>x;
            s.insert(x);
        }
        int ans=0;
        for (int i = 0; i <m ; ++i) {
           int x;cin>>x;
           if(s.find(x)!=s.end()){
               ans++;
           }
        }
        cout<<ans<<endl;
    }
}