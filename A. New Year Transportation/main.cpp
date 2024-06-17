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
    vector<int >a(n,0);
    for (int i =1 ; i <n ; ++i) {
        int x;
        cin>>x;
        a[i]=x;
    }
    bool flag=false;
    int sum=1,pos=1;
    while(sum<m){
        sum=(pos+a[pos]);
        pos=sum;
    }
    if(sum==m)flag = true;
    flag ? cout<<"YES":cout<<"NO";
}