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
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    vector<int>prefix(n);
    prefix[0]=v[0];
    for (int i = 1; i <n ; ++i) {
        prefix[i]=prefix[i-1]+v[i];
    }
    //for (int i = 0; i <n ; ++i) {
  //      cout<<prefix[i]<<" ";
   // }
    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        auto me= lower_bound(prefix.begin(),prefix.end(),x);
        int index=me-prefix.begin()+1;
        cout<<index<<endl;
    }
}