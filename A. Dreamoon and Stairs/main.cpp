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
    int n,m;
    cin>>n>>m;
    int steps=0;
    if(n%2==0){
        steps=n/2;
    }
    else{
        steps=(n/2)+1;
    }
    for (int i =steps; i<=n ; ++i) {
    if(i%m==0){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}