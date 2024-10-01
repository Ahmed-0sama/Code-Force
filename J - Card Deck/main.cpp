#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>vis(n);
        vector<int>v(n);
        priority_queue<pair<int,int>>pq;
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
            pq.push({v[i],i});
        }
        while(!pq.empty()){
        int i=pq.top().second;
        pq.pop();
        if(vis[i]==0){
            for (; i <n ; ++i) {
                if(vis[i]==1){
                    break;
                }
                vis[i]=1;
                cout<<v[i]<<" ";
            }
          }
        }
        cout<<endl;
    }

    return 0;
}