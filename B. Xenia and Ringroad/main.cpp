#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main(){
    fastread();
    ll s,t;
    cin>>s>>t;
    ll count=0;
    ll arr[t+1];
    for (ll i = 1; i <=t; ++i) {
        cin>>arr[i];
    }
    count+=arr[1]-1;
    for (int i = 1; i <t ; ++i) {
       if(arr[i]<arr[i+1]){
           count+=arr[i+1]-arr[i];
       } else if(arr[i]>arr[i+1]){
           count+=s-arr[i]+arr[i+1];
       }
    }
cout<<count<<endl;
return 0;
}