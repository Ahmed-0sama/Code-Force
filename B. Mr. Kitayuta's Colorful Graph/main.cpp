#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
vector<pair<int,int>>adj[150];
int ans=0;
vector<bool>vis;

void dfs(int cur,int end,int col) {
    if(vis[cur]) return;
    vis[cur]=true;
    if(cur==end) {
        ans++;
        return;
    }
    for (int i = 0; i <adj[cur].size() ; ++i) {
        if(adj[cur][i].second==col&& !vis[adj[cur][i].first]) {
            dfs(adj[cur][i].first,end,col);
        }
    }
}
signed main(){
    fastread();
    int nVertices,nEdges;
    cin>>nVertices>>nEdges;
    for (int i = 0; i <nEdges ; ++i) {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        ans=0;
        for (int i = 1; i <=100 ; ++i) {
            vis.assign(150,false);
            dfs(a,b,i);
        }
        cout<<ans<<endl;
    }
}