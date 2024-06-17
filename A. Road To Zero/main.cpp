#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed  main(){
    fastread();
    int t;
    cin>>t;
    while (t--){
        int x,y;
        cin>>x>>y;
        int a,b;
        cin>>a>>b;
        int minn=min(x,y);
        int maxx=max(x,y);
        if(2*a<=b){
            cout<<a*(x+y)<<endl;
    }
        else{
            cout<<minn*b+(maxx-minn)*a<<endl;
        }
    }
}