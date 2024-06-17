#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int t;
    cin>>t;
    while(t--) {
    string s;
    cin>>s;
    char charnew='0';
        for (int i = 0; i <s.length() ; ++i) {
            if(s[i]=='?'){
                cout<<charnew;
            }
            else{
                cout<<s[i];
                charnew=s[i];
            }
        }
        cout<<endl;
    }
}