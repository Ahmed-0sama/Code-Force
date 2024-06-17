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
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>v(n);
    queue<pair<int,int>>q;
    for (int i = 0; i <n ; ++i) {
        v[i].first=i;
        int x;
        cin>>x;
        v[i].second=x;
        q.push(v[i]);
    }
    while (true){
        if(q.size()==1){
        cout<<q.front().first+1<<endl;
            break;
        }
        else{
            if(q.front().second<=m){
                q.pop();
            }
            else{
                q.front().second-=m;
                q.push(q.front());
                q.pop();
            }
        }
    }


}