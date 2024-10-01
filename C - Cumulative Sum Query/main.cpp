#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int n;cin>>n;
    vector<int>v(n,0);
    int z;cin>>z;
    v[0]=z;
    for (int i =1; i <n ; ++i) {
        int x;cin>>x;
        v[i]=v[i-1]+x;
    }
    int q;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        if(l>0){
            l--;
            cout<<v[r]-v[l]<<endl;

        }
        else {
            cout << v[r] << endl;
        }
    }
}