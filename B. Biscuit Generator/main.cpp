#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main(){
    fastread();
    ll a,b,t;
    cin>>a>>b>>t;
    ll max=t/a;
    ll count=0;
    count =b*max;
    cout<<count<<endl;
    return 0 ;
}