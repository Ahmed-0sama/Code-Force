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
    while(t--) {
        int n;
        cin>>n;
        char arr1[n];
        char arr2[n];
        for(int i=0;i<n;i++) {
            char x;
            cin>>x;
            if(x=='G'){
                arr1[i]='B';
            }
            else{
                arr1[i]=x;
            }

        }
        for(int i=0;i<n;i++) {
            char x;
            cin>>x;
            if(x=='G'){
                arr2[i]='B';
            }
            else{
                arr2[i]=x;
            }

        }
        bool flag=true;
        for(int i=0;i<n;i++) {
            if(arr1[i]!=arr2[i]){
                flag=false;
                break;
            }
        }
        flag?cout<<"YES"<<endl:cout<<"NO"<<endl;

    }
}