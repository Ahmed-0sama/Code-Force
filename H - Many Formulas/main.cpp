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
    string x;cin>>x;
    int n = x.length();
    int ans=0;
    for (int mask = 0; mask < (1 << (n - 1)); ++mask) {
        int sum = 0;
        int last = x[0] - '0';
        for (int i = 0; i < n - 1; ++i) {
            if (mask & (1 << i)) {
                sum += last;
                last = 0;
            }
            last = last * 10 + (x[i + 1] - '0');
        }
        ans += sum+last;
    }
    cout<<ans<<endl;
}