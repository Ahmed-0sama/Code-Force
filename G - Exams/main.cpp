#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
bool preceed(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}
signed main(){
    fastread();
    int n;cin>>n;
    vector<pair<int,int>>v(n);
    for (int i = 0; i <n ; ++i) {
    cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(), preceed);
    int best=v[0].second;
    for (int i = 1; i <n ; ++i) {
        if(best<=v[i].second){
            best=v[i].second;
        }
        else{
            best=v[i].first;
        }
    }
    cout<<best<<endl;
}