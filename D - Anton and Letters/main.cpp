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
    string x;getline(cin, x);
    set<char>s;
    for (int i = 0; i <x.length() ; ++i) {
        if(x[i]=='{'||x[i]=='}'||x[i]==' '||x[i]==','){
            continue;
        }
        else{
            s.insert(x[i]);
        }
    }
    cout<<s.size()<<endl;
}