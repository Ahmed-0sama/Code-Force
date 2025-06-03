#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
bool preceed(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second) return a.first>b.first;
    return a.second>b.second;
}
signed main(){
    fastread();
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 1; i <n-1 ; i+=2) {
        int t=v[i];
        v[i]=v[i+1];
        v[i+1]=t;
    }
    for (int i = 0; i <n ; ++i) {
        cout<<v[i]<<' ';
    }
}