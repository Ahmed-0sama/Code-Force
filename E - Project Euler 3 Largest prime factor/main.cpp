#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v;
        for (int i = 2; i*i<=n ; ++i) {
            while(n%i==0){
                n/=i;
                v.push_back(i);
            }
        }
        if (n > 1) {
            v.push_back(n);
        }
         cout<<v[v.size()-1]<<endl;
    }
}