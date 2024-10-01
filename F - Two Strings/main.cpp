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
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        map<char,int>mp;
        string x;cin>>x;
        for (int i = 0; i <s.length() ; ++i) {
            mp[s[i]]++;
        }
        bool flag=false;
        for (int i = 0; i <x.length() ; ++i) {
            if(mp[x[i]]>0){
                flag=true;
                break;
            }
        }
        flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
            
}