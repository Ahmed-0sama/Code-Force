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
       set<char>set;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                i++;
            }
            else{
                set.insert(s[i]);
            }
        }
        for(auto it: set)
        {
            cout<<it;
        }
        cout<<endl;
    }

}