#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
            ll n,m,k; cin>>n>>m>>k;
            priority_queue<ll,vector<ll>,greater<>>pq;
            vector<ll>v;
            int cnt=0;
            for(int i=0;i<(int)n;i++){
                ll x; cin>>x;
                pq.push(x);
                cnt++;
                if(cnt==m){
                    v.push_back(pq.top());
                    pq.pop();
                    cnt--;
                }
            }
            while(!pq.empty()){
                v.push_back(pq.top());
                pq.pop();
            }
            cout<<v[k-1]<<endl;
    }

    return 0;

}