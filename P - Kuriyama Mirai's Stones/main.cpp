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
signed main() {
    fastread();
    int n;cin>>n;
    vector<int>v(n);
    vector<int>un(n);
    for (int i = 0; i <n ; ++i) {
        int x;cin>>x;
        v[i]=x;
        un[i]=x;
    }
    sort(v.begin(),v.end());
    int q;cin>>q;
    vector<int>prev(n);
    vector<int>preun(n);
    prev[0]=v[0];
    for (int i = 1; i <n ; ++i) {
        prev[i]=prev[i-1]+v[i];
    }
    preun[0]=un[0];
    for (int i = 1; i <n ; ++i) {
        preun[i]=preun[i-1]+un[i];
    }
//    for (int i = 0; i < n; ++i) {
//        cout<<prev[i]<<' ';
//    } cout<<endl;
//    for (int i = 0; i < n; ++i) {
//        cout<<preun[i]<<' ';
//    }
    while(q--){
        int t,l,r;cin>>t>>l>>r;
        l--,r--;
        if(t==1){
            if(l>0){
                l--;
                cout<<preun[r]-preun[l]<<endl;
            }
            else{
                cout<<preun[r]<<endl;
            }
        }
        else{
            if(l>0){
                l--;
                cout<<prev[r]-prev[l]<<endl;
            }
            else{
                cout<<prev[r]<<endl;
            }
        }
    }
}
