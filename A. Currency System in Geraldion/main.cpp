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
    int mn=INT_MAX;
    for (int i = 0; i <n ; ++i) {
        int x;cin>>x;
        v[i]=x;
        mn=min(mn,x);
    }
    mn==1?cout<<"-1"<<endl:cout<<"1"<<endl;
}