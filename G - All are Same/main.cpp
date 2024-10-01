#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int fast_pow(int base, int power) {
    if (power == 0) return 1;

    int res = fast_pow(base, power / 2);
    res *= res;

    if (power % 2 != 0) {
        res *= base;  // Multiply by base if the power is odd
    }

    return res%100;
}
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);

}
signed main(){
    int t;cin>>t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (v.front() == v.back()) {
            cout << "-1" << endl;
            continue;
        }
        int g=0;
        for (int i = 0; i < n - 1; ++i) {
            g = gcd(g, v[i+1]-v[i]);
        }
        cout << g << endl;
    }
}