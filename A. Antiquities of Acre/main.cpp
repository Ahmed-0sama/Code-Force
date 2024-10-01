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
    int n,x,h,m,s;
    cin>>n>>x>>h>>m>>s;
    int total =h*60*60+m*60+s;
    int out=n-total*x;
    if(out<0){
        out=0;
    }
    cout<<out<<endl;

}