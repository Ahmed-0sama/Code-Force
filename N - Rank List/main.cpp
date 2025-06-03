#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
//const int N=1e4;
//int MOD=1e9+7;
//int dp[N][N];
//int n,weight;
//vector<vector<int>>v(n);
bool preceed(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first)return a.second<b.second;
    return a.first>b.first;
}
signed main(){
    int n,k;cin>>n>>k;
    vector<pair<int,int>>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),preceed);
    pair<int,int>team=v[k-1];
    int cnt=0;
    for (int i = 0; i <n ; ++i) {
        if(v[i]==team){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
