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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];

    }
    sort(v.begin(),v.end());
    int mx=-1;
    for (int i = 0; i <n ; ++i) {
        if(k%v[i]==0){
            mx=v[i];
        }
    }
    cout<<k/mx<<endl;
}