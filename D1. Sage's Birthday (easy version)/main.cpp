#include <vector>
#include <bits/stdc++.h>
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
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0; i <n-1 ; ++i) {
        swap(v[i],v[i+1]);
        i++;
    }
    if(n%2){
        cout<<n/2<<endl;
    }
    else{
        cout<<n/2-1<<endl;
    }
    for (int i = 0; i <n ; ++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}