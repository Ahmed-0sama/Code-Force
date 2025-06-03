#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
bool preceed(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}
signed main() {
    fastread();
    int n,r;
    double avg;
    cin>>n>>r>>avg;
    int sum=0;
    vector<pair<int,int>>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i].first>>v[i].second;
        sum+=v[i].first;
    }
    sort(v.begin(),v.end(),preceed);
//    for (int i = 0; i <n ; ++i) {
//        cout<<v[i].first<<" "<<v[i].second<<endl;
//    }
    int target_sum = avg * n;
    int req=target_sum-sum;
    int cnt=0;
    int index=0;
    if(req<=0){
        cout<<cnt<<endl;
        return 0;
    }
    while(req>0&&index<n){
        int ok=r-v[index].first;
        int add=min(ok,req);
        cnt+=add*v[index].second;
        req-=add;
        index++;
    }
    cout<<cnt<<endl;
}