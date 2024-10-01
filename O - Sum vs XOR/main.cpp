#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main(){
    fastread();
    int n;cin>>n;
    int count=0;
    while(n){
        if((n & 1) == 0) count++;
        n >>= 1;
    }
    cout << (1LL << count) << endl;
    return 0;
}