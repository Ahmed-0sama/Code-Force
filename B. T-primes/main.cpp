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
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int sq=sqrt(n);
        if(sq*sq==n){
            bool flag=false;
            for(int i=2;i<=sqrt(sq);i++){
                if(n%i==0) {
                    flag = true;
                    break;
                }
            }
           !flag&&n>1?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}