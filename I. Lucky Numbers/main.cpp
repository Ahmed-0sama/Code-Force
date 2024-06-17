#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main(){
    fastread();
    ll n;
    cin>>n;
    ll second=n%10;
    ll one =n/10;
    if(second%one==0){
        cout<<"YES"<<endl;
    }
    else if(one%second==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}