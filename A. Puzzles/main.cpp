#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed  main(){
    fastread();
    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=LLONG_MAX;
    for(int i=0;i<=m-n;i++){
        ans=min(ans,(v[i+n-1]-v[i]));
        }
    cout<<ans<<endl;
    }

