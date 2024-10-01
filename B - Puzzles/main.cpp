#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int req,n;cin>>req>>n;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
   int mn=LLONG_MAX;
    for (int i = 0; i <=n-req ; ++i) {
        mn=min(mn,(v[i+req-1]-v[i]));
    }
    cout<<mn<<endl;
}