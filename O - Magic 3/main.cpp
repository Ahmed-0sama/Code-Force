#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n,s,d;
    cin>>n>>s>>d;
    vector<pair<int,int>>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i].first>>v[i].second;
    }
    bool flag=false;
    for (int i = 0; i <n ; ++i) {
        if(v[i].first<s&&v[i].second>d){
            flag=true;
            break;
        }
    }
    flag?cout<<"Yes"<<endl:cout<<"No"<<endl;
}