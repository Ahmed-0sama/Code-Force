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
    int n,x;
    cin>>n>>x;
    int c=0;
    for (int i = 1; i <=n ; ++i) {
        if(x%i==0 && x/i<=n){
            c++;
        }
    }
    cout<<c<<endl;
}