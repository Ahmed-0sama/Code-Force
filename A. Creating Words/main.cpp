#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
    string x,y;
    cin>>x>>y;
    char temp=x[0];
    x[0]=y[0];
    y[0]=temp;
    cout<<x<<" "<<y<<endl;
    }
}