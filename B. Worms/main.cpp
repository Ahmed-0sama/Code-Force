#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<pair<int ,int> >pre(n);
    for (int i = 0; i <n ; ++i) {
        if(i == 0){
            pre[i] = {a[i],1};
        } else{
            pre[i] = {pre[i-1].first + a[i],pre[i-1].first+ 1};
        }
    }
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        int ans = lower_bound(pre.begin(),pre.end(),make_pair(x,0LL)) - pre.begin();
        cout << ans + 1 << endl;
    }
}