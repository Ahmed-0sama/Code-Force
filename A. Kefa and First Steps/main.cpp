#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed  main(){
    fastread();
    int _;
    cin>>_;
    vector<int>v(_);
    for(int i=0;i<_;i++){
        cin>>v[i];
    }
    int maxx=1;
    int l=0;
    int r=l+1;
    while(r<_)
    {
        if(v[r]>=v[r-1])
        {
            maxx=max(maxx,r-l+1);
        }
        else
        {
            l=r;
        }
        r++;
    }
    cout<<maxx<<endl;
}