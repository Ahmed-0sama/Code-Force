#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main() {
    fastread();
    int t;
    cin>>t;
    while(t--){
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        int count=(r%2)+(g%2)+(b%2)+(w%2);
        if(count<=1){
            cout<<"YES"<<endl;
        }
        else if(r>0&&g>0&&b>0){
            r--;
            g--;
            b--;
            w++;
            if((r%2)+(g%2)+(b%2)+(w%2)<=1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
        else{
            cout<<"NO"<<endl;
        }
    }
}