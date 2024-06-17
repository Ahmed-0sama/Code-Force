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
        string s;
       cin>>s;
         int ans=0;
         int l=0;
         for(int i=0;i<n;i++){
            if(s[i]=='('){
                l++;
            }
            else{
                l--;
            }
            if(l<0){
                s+=')';
                ans++;
                l++;
            }
         }
         cout<<ans<<endl;
    }
}