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
    deque<int>q;
    for (int i = 0; i <n ; ++i) {
        int x;cin>>x;
        q.push_back(x);
    }
    while (d--){
        int x;
        x=q.front();
        q.pop_front();
        q.push_back(x);
    }
    for (int c:q) {
        cout<<c<<" ";
    }
}