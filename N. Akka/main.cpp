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
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int l=0;
    int r=n-1;
    int most_tasty=0;
    int least_tasty=0;
    bool flag=true;
    for (int i = 0; i <n ; ++i) {
    if(flag){
        most_tasty+=v[r];
        r--;
        flag=false;
    }
    else{
        least_tasty+=v[l];
        l++;
        flag=true;
    }
    }
    cout<<most_tasty<<" "<<least_tasty;
}