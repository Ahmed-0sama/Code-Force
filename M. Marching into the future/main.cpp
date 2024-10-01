#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
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
        vector<int>v(n);
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
        }
        int mn=accumulate(v.begin(), v.end(), 0LL);
        int max=v[0];
        for (int i = 1; i <n ; ++i) {
            max &=v[i];
        }
        int res=mn-max;
        cout<<res<<endl;
    }
}