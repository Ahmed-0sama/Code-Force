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
    int n;
    cin>>n;
   map<pair<int,int>,int>mp;
    for (int i = 0; i <n ; ++i) {
        int a,b;
        cin>>a>>b;
        mp[{a,b}]++;
    }
    int cash =INT_MIN;

    for (auto it = mp.begin(); it !=  mp.end(); ++it) {
        if (it->second > cash) {
            cash = it->second;
        }
    }
    cout<<cash<<endl;

    return 0;
}