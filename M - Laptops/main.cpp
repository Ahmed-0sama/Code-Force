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
    vector<pair<int,int>>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i].first>>v[i].second;
    }
    bool flag=false;
    sort(v.begin(),v.end(), preceed);
    for (int i = 0; i <n-1 ; ++i) {
       if(v[i].first<=v[i+1].first&&v[i].second>=v[i+1].second){
           flag=true;
           break;
       }
    }
    flag?cout<<"Happy Alex"<<endl:cout<<"Poor Alex"<<endl;
}