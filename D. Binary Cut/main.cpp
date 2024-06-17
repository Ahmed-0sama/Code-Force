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
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    int split=0;
    int c=1;
    for(int i=1;i<s.size();i++){
        if(s[i-1]=='0'&&s[i]=='1'){
            split=1;
        }
        if(s[i]==s[i-1]){
        }
        else{
            c++;
        }
    }
        cout<<c-split<<endl;
    }
}