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
    int n,d;
    cin>>n>>d;
    deque<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    for (int i = 0; i <d ; ++i) {
        int x=v.front();
        v.pop_front();
        v.push_back(x);
    }
    for(auto i:v){
        cout<<i<<" ";
    }
}