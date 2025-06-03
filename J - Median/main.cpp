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
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int pos=v[(n-1)/2];
    int cnt=0;
    while(pos!=k){
        cnt++;
        v.push_back(k);
        sort(v.begin(),v.end());
        pos=v[(v.size()-1)/2];
    }
    cout<<cnt<<endl;
}