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
    vector<int>v(3);
    for (int i = 0; i <3 ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[1]<<endl;
}