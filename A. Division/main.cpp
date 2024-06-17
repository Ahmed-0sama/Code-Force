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
        if(n<=1399){
            cout<<"Division 4"<<endl;
        }
        else if(1400<=n&&n<=1599){
            cout<<"Division 3"<<endl;
        }
        else if(1600<=n&&n<=1899){
            cout<<"Division 2"<<endl;
        }
        else if(n>=1900){
            cout<<"Division 1"<<endl;
        }
    }
}