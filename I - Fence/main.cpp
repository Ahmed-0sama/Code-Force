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
    vector<int>prefix(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    prefix[0]=v[0];
    for (int i = 1; i <n ; ++i) {
        prefix[i]=prefix[i-1]+v[i];
    }
    int mn=INT_MAX;
    int index=0;
//    for (int i = 0; i <n ; ++i) {
//        cout<<prefix[i]<<" ";
//    }
    for (int i = 0; i <=n-k ; ++i) {
        int ans;
        if(!i){
            ans=prefix[k-1];
        }
        else{
             ans=prefix[k+i-1]-prefix[i-1];
        }
        if(ans<mn){
            index=i+1;
            mn=ans;
        }
    }
    cout<<index<<endl;
}