#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int knapsack(int sum,int c,int index,int w,vector<pair<int,int>>&v) {
    if (c == w||index==v.size()) {
        return sum;
    }
    int skip= knapsack(sum, c, index + 1, w, v);
    int take = 0;
    if (c + v[index].first <= w) {
        take=knapsack(sum + v[index].second, c + v[index].first, index + 1, w, v);
    }
    return max(skip, take);

}
signed main() {
    fastread();
    int n,w;
    cin>>n>>w;
    vector<pair<int,int>>v(n) ;
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    cout<<knapsack(0,0,0,w,v);
}