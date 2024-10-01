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
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
signed main() {
    fastread();
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    vector<int> prefix(n+1,0);
    vector<int>suffix(n+2,0);
    for (int i = 1; i <=n ; ++i) {
        prefix[i]=gcd(prefix[i-1],v[i-1]);
    }
    for (int i = n; i >= 1; i--) {
        suffix[i] =gcd(suffix[i + 1], v[i - 1]);
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int result=gcd(prefix[x-1],suffix[x+1]);
        cout<<result<<endl;
    }
}