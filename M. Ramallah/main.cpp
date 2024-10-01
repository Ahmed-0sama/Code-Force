#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n,m;
    cin>>n>>m;
    if(n<m){
        cout<<"John"<<endl;
    }
    else if(m<n){
        cout<<"Mary"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }
}