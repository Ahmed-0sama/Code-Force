#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> prefix(n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
            prefix[i]=v[i];
            if(i>0){
                prefix[i]+=prefix[i-1];
            }
        }
        sort(v.begin(),v.end());
        int diff=0;
        for (int i = 0; i < ; ++i) {
            
        }
        
        cout<<diff<<endl;
    }
}