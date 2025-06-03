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
    int s,n;cin>>s>>n;
    vector<pair<int,int>>v(n);
    for (int i = 0; i <n ; ++i) {
       cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
//    for (int i = 0; i <v.size() ; ++i) {
//        cout<<v[i].first<<" "<<v[i].second;
//    }
    bool flag=true;
    for (int i = 0; i <n ; ++i) {
        if(s>v[i].first){
            s+=v[i].second;
        }
        else{
            flag=false;
        }
    }
    flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
}