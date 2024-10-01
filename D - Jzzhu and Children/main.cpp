#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>
#include <deque>
#include <stack>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n,m;
    cin>>n>>m;
    deque<pair<int,int>>s;
    vector<pair<int,int>>v(n+1);
    for (int i = 1; i <=n ; ++i) {
        cin>>v[i].first;
        v[i].second=i;
    }
    for (int i = 1; i <=n ; ++i) {
        s.push_back(v[i]);
    }
    while(s.size()>1){
        if(s.front().first-m>0){
            s.push_back({s.front().first-m,s.front().second});
            s.pop_front();
        }
        else{
            s.pop_front();
        }
    }
    cout<<s.front().second<<endl;
}