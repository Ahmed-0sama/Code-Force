#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    string s;
    cin>>s;
    bool odd=true;
    bool even=true;
    for (int i = 0; i <s.length() ; i+=2) {
        if(isupper(s[i])){
            odd=false;
            break;
        }
    }
    for (int i =1; i <s.length() ; i+=2) {
        if(islower(s[i])){
            even=false;
            break;
        }
    }
    if(odd&&even){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}