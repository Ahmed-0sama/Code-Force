#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n,k,l,r,sAll,sk;
    cin>>n>>k>>l>>r>>sAll>>sk;
    sAll -= sk;

    for (int i = k; i >= 1; i--) {
        cout << sk / i << " ";
        sk -= sk / i;
    }

    int remaining = n - k;
    for (int i = remaining; i >= 1; i--) {
        cout << sAll / i << " ";
        sAll -= sAll / i;
    }

    cout << endl;

}