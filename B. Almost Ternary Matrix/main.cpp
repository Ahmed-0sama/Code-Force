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
        int n,m;cin>>n>>m;
        for (int i = 0; i <(1<<n) ; ++i) {
            for (int j = 0; j <(1<<m) ; ++j) {
                if((i>>j)&1)
                    cout<<j<<' ';
            }
            }
        }
    }
