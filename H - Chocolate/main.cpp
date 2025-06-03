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
   int n;cin>>n;
   vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    vector<int>index;
    for (int i = 0; i <n ; ++i) {
        if(v[i]!=0){
            index.push_back(i);
        }
    }
    int ans=1;
    for (int i = 1; i <index.size() ; ++i) {
        ans*=(index[i]-index[i-1]);
    }
    index.size()==0?cout<<"0"<<endl:cout<<ans<<endl;
}