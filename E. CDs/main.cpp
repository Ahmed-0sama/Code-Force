#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main() {
    fastread();
    int n,m;
    cin>>n>>m;
    int arr1[n];
    for (int i = 0; i <n ; ++i) {
        int x;
        cin>>x;
        arr1[i]=x;
    }
   map<int,int>mp;
    for (int i = 0; i <n ; ++i) {
        if(mp[arr1[i]]==0)
            mp[arr1[i]]=1;
        else
            mp[arr1[i]]++;
    }
    int arr2[m];
    for (int i = 0; i <m ; ++i) {
        int x;
        cin>>x;
        arr2[i]=x;
    }
    int c=0;
    for (int i = 0; i <m ; ++i) {
       if(mp[arr2[i]]>0)
            {
                c++;
                mp[arr2[i]]--;
            }
    }
    cout<<c<<endl;
}