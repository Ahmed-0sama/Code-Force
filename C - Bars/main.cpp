#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
bool can(vector<int>&v,int req,int n){
    if (req == 0) return true;

    for (int mask = 0; mask < (1<<n) ; ++mask) {
        int sum=0;
        for (int i = 0; i <n ; ++i) {
            if((mask >> i )& 1){
                sum+=v[i];
            }

        }
        if(sum==req){
            return true;
        }
    }
    return false;
}
signed main(){
    fastread();
    int t;cin>>t;
    while (t--){
        int req,n;cin>>req>>n;
        vector<int>v(n);
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
        }
        can(v,req,n)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }

}