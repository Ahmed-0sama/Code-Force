#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1000001;
const int MOD=1073741824;
int d[N];
void countDivisors() {
    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; j += i) {
            d[j]++;
        }
    }
}
signed main() {
    fastread();
    countDivisors();
    int a,b,c;cin>>a>>b>>c;
    int sum=0;
    for (int i = 1; i <=a ; ++i) {
        for (int j = 1; j <=b; ++j) {
            for (int k = 1; k <=c ; ++k) {
                int mult=i*j*k;
                sum=(sum+d[mult]%MOD);
            }
        }
    }
    cout<<sum<<endl;
}