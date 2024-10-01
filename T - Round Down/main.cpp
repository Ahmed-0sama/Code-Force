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
    int pos=s.find(".");
    if(pos==string::npos){
        cout<<s;
    }
    for (int i = 0; i <pos ; ++i) {
        cout<<s[i];
    }
}