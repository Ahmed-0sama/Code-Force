#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <iomanip>
#include <set>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
bool perceed(pair<double,int> a,pair<double,int> b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    else{
        return a.first<b.first;

    }
}
signed main() {
    fastread();
    int n,t1,t2,k;
    cin>>n>>t1>>t2>>k;
    vector<vector<int>> v(n,vector<int>(3));
    for (int i = 0; i <n ; ++i) {
        v[i][0]=i+1;
        cin>>v[i][1]>>v[i][2];
        sort(v[i].begin()+1,v[i].end());
    }
    vector<pair<double,int>> ans;
    for (int i = 0; i <n ; ++i) {
        double a=(double(v[i][1]*t1*(100-k)/double(100))+double(v[i][2]*t2));
        double b=(double(v[i][2]*t1*(100-k)/double(100))+double(v[i][1]*t2));

        ans.push_back({max(a,b),v[i][0]});
    }
    sort(ans.begin(),ans.end(),perceed);
    for (int i = n-1; i >=0 ; --i) {
        cout<<ans[i].second<<" "<<fixed<<setprecision(2)<<ans[i].first<<endl;
    }
}