#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <deque>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main() {
    fastread();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int l=0;
    int ans=0;
    for (int r = 0; r <n ; ++r) {
        while(v[r]>2*v[l]){
            l++;
        }
        ans=max(ans,r-l+1);
    }
    int minremoval=n-ans;
    cout<<minremoval<<endl;
}