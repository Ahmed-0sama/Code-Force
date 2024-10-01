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
    map<string ,bool>mp;
    stack<string>s;
    int n;cin>>n;
    for (int i = 0; i <n ; ++i) {
        string x;cin>>x;
        s.push(x);
    }
    while(!s.empty()){
        if(!mp[s.top()]){
            cout<<s.top()<<endl;
            mp[s.top()]=true;
            s.pop();
        }
        else{
            s.pop();
        }
    }
}