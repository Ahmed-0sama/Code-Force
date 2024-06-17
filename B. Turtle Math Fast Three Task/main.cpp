#include <iostream>
#include<bits/stdc++.h>
#include <vector>
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
        ll sum=0;
        cin>>n;
        vector<int>v(n);
        for (ll i = 0; i < n; ++i) {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum%3==0){
            cout<<"0"<<endl;
        }
        else if(sum%3==2){
            cout<<"1"<<endl;

        }
        else{
            bool flag=false;
            for (ll i = 0; i < n; ++i) {
                if(v[i]%3==1){
                    flag=true;
                    break;
                }
            }

        if(flag){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
    }
    return 0;
}
