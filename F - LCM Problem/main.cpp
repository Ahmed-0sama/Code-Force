#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1e6+1;
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;

        if (2 * l <= r) {
            cout << l << " " << 2 * l << endl;
        } else {
            cout << -1 << " " << -1 << endl;
        }
    }
}