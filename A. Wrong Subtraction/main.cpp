#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main() {
    fastread();
    int n,t;
    cin>>n>>t;
    while(t--) {
        int k = n % 10;
        if(k == 0) {
            n /= 10;
        } else {
            n--;
        }
    }
    cout<<n<<endl;
}