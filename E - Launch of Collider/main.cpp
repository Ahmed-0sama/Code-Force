#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>
#include <deque>
#include <queue>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n;
    cin>>n;
    vector<char>direction(n);
    vector<int>speed(n);
    for (int i = 0; i <n ; ++i) {
        cin>>direction[i];
    }
    for (int i = 0; i <n ; ++i) {
        cin>>speed[i];
    }
    int ans=INT_MAX;
    for (int i = 0; i <n-1 ; ++i) {
        if(direction[i]=='R'&&direction[i+1]=='L'){
            ans=(min(ans,((speed[i+1]-speed[i])/2)));
        }
    }
    ans==INT_MAX?cout<<"-1"<<endl:cout<<ans<<endl;

}