#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main() {

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int screen=y/2+y%2;
        int total=15*screen;
        total-=y*4;
        if(total>=x){
            cout<<screen<<endl;
        }
        else{
            x-=total;
            if(x%15==0){
                cout<<screen+x/15<<endl;
            }
            else{
                cout<<screen+(x/15)+1<<endl;
            }
        }
    }
}