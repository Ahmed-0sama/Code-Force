#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
struct perceed{
    int x;
    int y;
};
bool comp(perceed a,perceed b){
    return a.y>b.y;
}
signed main() {
    fastread();
    int capacity,n;
    cin>>capacity>>n;
    vector<perceed>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i].x>>v[i].y;
    }
    sort(v.begin(),v.end(),comp);
   int size=0;
   int profit=0;
    for(int i=0;i<n;i++){
        if(size+v[i].x<=capacity){
            size+=v[i].x;
            profit+=v[i].x*v[i].y;
        } else{
            profit+=v[i].y*(capacity-size);
            break;
        }
    }
    cout<<profit<<endl;
}