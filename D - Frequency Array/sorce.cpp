#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
   int t;cin>>t;
   while(t--){
       int n;cin>>n;
       map<int,int>mp;
       for (int i = 0; i < n; ++i) {
           int x;cin>>x;
           mp[x]++;
       }
       bool flag=true;
     for(auto i:mp){
         if(i.second>1){
             flag=false;
             break;
         }
     }
       flag?cout<<"prekrasnyy"<<endl:cout<<"ne krasivo"<<endl;
   }

}