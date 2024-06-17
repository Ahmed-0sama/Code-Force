#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
ll gcd(ll a,ll b){
    while(b != 0){
        long long temp = a;
        a = b;
        b = temp % a;
    }
    return a;
}
ll lcm(ll a,ll b) {
    return (a / gcd(a,b)) * b;
}
int main(){
    fastread();
    ll a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;

}