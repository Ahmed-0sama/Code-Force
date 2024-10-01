#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
map<char,int>mp;
vector<char>v;
void preprocess(){
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i <s.length() ; ++i) {
        mp[s[i]]=i;
        v.push_back(s[i]);
    }
}
signed main(){
    fastread();
    char direction;cin>>direction;
    preprocess();
    string s;cin>>s;
    string ans="";
    for (int i = 0; i < s.length(); ++i) {
        int index = mp[s[i]];
        if (direction == 'R') {
            ans += v[index-1];
        } else {
            ans += v[index+1];
        }
    }
    cout<<ans<<endl;
}