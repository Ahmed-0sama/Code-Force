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
    string s;
    cin>>s;
    set<char>se;
    for (int i = 0; i <s.length() ; ++i) {
        se.insert(s[i]);
    }
    se.size()%2==0?cout<<"CHAT WITH HER!"<<endl:cout<<"IGNORE HIM!"<<endl;
}