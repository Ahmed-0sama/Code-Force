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
    int t;
    cin >> t;
    while(t--){
        string s;
        string x;
        cin >> s;
        cin >> x;
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])==m.end()){
                m[s[i]]=1;
            }
            else{
                m[s[i]]++;
            }
        }
        bool flag=false;
        for(int i=0;i<x.size();i++){
           if(m[x[i]]>=1){
                flag=true;
                break;
           }
        }
        flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}