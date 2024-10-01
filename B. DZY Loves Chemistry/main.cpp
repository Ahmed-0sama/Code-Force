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
vector<vector<int>>adj;
bool visited[105];
int ans=1;
void dfs(int n, int pa)
{
    if(n!=pa)
    {
        ans*=2;
    }
    visited[n] = true;
    for(int i=0;i<adj[n].size();i++)
    {
        int lol = adj[n][i];
        if(!visited[lol])
        {
            dfs(lol, pa);
        }
    }
}
int connected_components(int n){
    for (int i = 1; i <=n ; ++i){
        if(!visited[i]){
            dfs(i,i);
        }
    }
    return ans;
}
signed main() {
    fastread();
    int n,m;
    cin>>n>>m;
    adj.resize(n+5);
    for (int i = 0; i <m ; ++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout<<connected_components(n)<<endl;

}