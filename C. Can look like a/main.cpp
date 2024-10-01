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
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];

        }
        sort(v.begin(),v.end(),greater<int>());
        cout<<v[0]<<endl;

    }
}