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
    int n,m;
    cin>>n>>m;
    map<string ,string>mp;
    for(int i=0; i<m;i++){
        string a,b;
        cin>>a>>b;
            mp[a]=b;
    }
    for(int i=0; i<n;i++) {
        string s;
        cin >> s;
        if (s.size() <= mp[s].size()) {
            cout << s << " ";
        } else {
            cout << mp[s] << " ";
        }
    }
}