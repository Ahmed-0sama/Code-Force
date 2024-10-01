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
        int a=1;
        int c;cin>>c;
        while(true){
        int b=(a^c);
        if(a<=b&&b<=c){
            cout<<a<<" "<<(a^c)<<endl;
            break;
        }
        a++;
        if(a>c){
            cout<<"-1"<<endl;
            break;
        }
    }
   }
}