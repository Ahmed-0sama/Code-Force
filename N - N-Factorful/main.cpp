#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1e6+1;
int prime[N];
int v[11][N];
void sieve() {
    for (int i = 2; i < N; ++i) {
        if (prime[i] == 0) {
            for (int j = i; j < N; j += i) {
                prime[j]++;
            }
        }
    }
    for (int n = 0; n <= 10; ++n) {
        for (int i = 1; i < N; ++i) {
            v[n][i] = v[n][i - 1] + (prime[i] == n);
        }
    }
}
int solve(int a,int b,int n){
    return v[n][b]-v[n][a-1];
}
signed main(){
    fastread();
    sieve();
    int t;cin>>t;
    while(t--){
        int a,b,n;cin>>a>>b>>n;
        cout<<solve(a,b,n)<<endl;
    }
}