#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main (){
    fastread();
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size()<=2) {
        cout <<"YES" << endl;
    }
    else if(s.size()>3){
        cout<<"NO"<<endl;
    }
    else{
        vector<int>v;
        for(auto i:s){
            v.push_back(i);
        }
        if(v[1]-v[0]==v[2]-v[1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}