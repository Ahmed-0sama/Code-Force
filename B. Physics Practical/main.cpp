#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <deque>
#include <climits>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main() {
    fastread();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  int n;
    cin >> n;
  int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
     sort(a,a+n);
    int count = INT_MAX;
    int x=0;
    for(int i=0;i<n;i++) {
        x=upper_bound(a,a+n,a[i]*2)-a;
        count=min(count,i+n-x);
    }
    cout<<count<<endl;
    return 0;
}
