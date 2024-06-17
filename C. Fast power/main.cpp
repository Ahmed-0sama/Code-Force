#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <climits>
#include <algorithm>
#include <stack>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int mod = 1000000007;
int  power(int n, int m, int mod) {
    if (m == 0) {
        return 1;
    }
    int half = power(n, m / 2, mod);
    int half_squared = (half * half) % mod;
    if (m % 2 != 0) {
        return (half_squared * n) % mod;
    } else {
        return half_squared;
    }
}
signed main(){
    int n,m;
    cin>>n>>m;
    n=n%mod;
    cout<<power(n,m,mod);

}