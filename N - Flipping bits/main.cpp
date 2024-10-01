#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
unsigned int toggle(unsigned int mask,int bit){
    return mask^(1U<<bit);
}
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
    unsigned int n;cin>>n;
        for (int i = 0; i <32 ; ++i) {
            n=toggle(n,i);
        }
        cout<<n<<endl;
    }
}