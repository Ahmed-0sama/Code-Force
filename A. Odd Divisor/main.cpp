#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       while(n%2==0){
           n=n/2;
        }

    if(n==1){
        cout<<"NO"<<endl;
    }
        else{
            cout<<"YES"<<endl;
        }
}
    }
