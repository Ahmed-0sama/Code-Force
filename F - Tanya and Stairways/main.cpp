#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>
#include <deque>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n;
    cin>>n;
    vector<int>vv(n);
    for (int i = 0; i <n ; ++i) {
        cin>>vv[i];
    }
    vector<int>v;
    int count=1;
    for (int i = 1; i <n ; ++i) {
        if(vv[i]==1){
            v.push_back(count);
            count=1;
        }
        else{
            count++;
        }
    }
    v.push_back(count);
    cout<<v.size()<<endl;
    for (int i = 0; i <v.size() ; ++i) {
        cout<<v[i]<<" ";
    }
}