#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    ll n;
    cin>> n;
    bool flag=false;
    int arr[8]={4,7,47,74,447,774,477,747};
    for (ll i = 0; i <sizeof (arr)/sizeof (arr[0]); ++i) {
        if(n%arr[i]==0){
            cout<<"YES"<<endl;
            flag=true;
            break;
        }
    }
if(!flag){
    cout<<"NO"<<endl;
}
    return 0;
}
