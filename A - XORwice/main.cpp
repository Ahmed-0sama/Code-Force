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
        int a,b;cin>>a>>b;
        cout<<(a^b)<<endl;
    }
}