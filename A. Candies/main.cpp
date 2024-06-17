#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll k=2;
        ll r=3;
        while(n%r!=0){
            r+=pow(2,k);
            k++;
        }
        cout<<n/r<<endl;
    }
    return 0;
}
