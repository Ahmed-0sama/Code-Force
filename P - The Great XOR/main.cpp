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
    while(t--) {
        int n;cin >> n;
        int count=0;
        for (int i=0;i<64;i++){
            if(1ll<<i>n) break;
            if(((n>>i)&1)==0){
                count+=(1ll<<i);
            }
        }
        cout<<count<<endl;
    }
}