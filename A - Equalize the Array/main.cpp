#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int n;cin>>n;
    map<int,int>mp;
    for (int i = 0; i <n ; ++i) {
        int x;cin>>x;
        mp[x]++;
    }
    int mx=INT_MIN;
    int index=0;
    for(auto pair:mp){
        if(mx<pair.second){
            mx=pair.second;
            index=pair.first;
        }
    }
    int ans=0;
    for (int i = 0; i <mp.size() ; ++i) {
        if(i==index){
            continue;
        }
        ans+=mp[i];
    }
    cout<<ans<<endl;

}