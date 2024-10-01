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
   map<string ,int>mp;
   while(t--){
       string s;cin>>s;
       if(mp[s]==0){
           cout<<"OK"<<endl;
           mp[s]++;
       }
       else{
           cout<<s<<mp[s]++<<endl;
       }
   }
}