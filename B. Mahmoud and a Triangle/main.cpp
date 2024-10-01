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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    for(int i = 0 ; i<n-2 ; i++)
    {
        if(a[i]+a[i+1]> a[i+2] && a[i]+a[i+2]> a[i+1]  && a[i+1]+a[i+2]> a[i] )
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
