#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
            for (int i = 1; (i|l)<=r ; i<<=1) {
                l|=i;
            }

        cout<<l<<endl;
    }
}