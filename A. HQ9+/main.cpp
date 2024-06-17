#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed  main(){
    fastread();
    string s;
    cin>>s;
    for (int i = 0; i <s.length() ; ++i) {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout<<"YES";
             return 0;
        }
    }
cout<<"NO"<<endl;
    return 0;
}
