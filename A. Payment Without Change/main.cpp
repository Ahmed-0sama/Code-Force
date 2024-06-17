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
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        if (s % n <= b && 1ll * a * n + b >= s) {
            cout << "YES"<<endl;
        }
        else {
            cout << "NO"<<endl;
        }

    }
}