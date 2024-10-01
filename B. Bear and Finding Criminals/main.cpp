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
    int n,city;
    cin>>n>>city;
    int sum=0;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }


    for (int i = 1; i <=n-city&&i<city; ++i) {
      if(a[city+i]+a[city-i]==1){
          sum--;
      }
    }
    cout<<sum<<endl;

}