#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    string s;
    cin >> s;
    map<string,int>mp;
    int count=0;
    for(int i=0; i<10;i++){
        string temp;
        cin>>temp;
        mp[temp]=count++;
    }

    string ans="";
    for(int i=0;i<80;i+=10){
        string temp=s.substr(i,10);
        ans+=to_string(mp[temp]);
    }
    cout<<ans<<endl;
}