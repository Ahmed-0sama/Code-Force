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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int power=0;
    int cost=0+v[0];
    for(int i=0; i<n-1;i++){
     int l=i;
     int r=l+1;
    if(v[l]>v[r]){
        power+=v[l]-v[r];
    }
    else{
        int diff = v[r] - v[l];
        if(power>diff){
            power-=diff;
        }
        else{
            cost+=(diff-power);
            power=0;
        }
    }
 }
    cout<<cost<<endl;
}