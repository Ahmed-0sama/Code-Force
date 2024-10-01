#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed  main() {
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int m= __gcd(n, q);
        int res=m-1;
        cout<<res<<endl;
    }
    return 0;
}
