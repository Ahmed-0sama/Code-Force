#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int MOD = 1e9+7;
const int N=1e6+1;
int fact[N+1], invFact[N+1];
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int bin_exp(int a, int b, int mod) {
    int res = 1;
    while (b > 0) {
        if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;
    }
    return res;
}
int power(int base, int exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {  // If exp is odd, multiply base with result
            result = (result * base) % mod;
        }
        base = (base * base) % mod;  // Square the base
        exp /= 2;  // Divide exp by 2
    }
    return result;
}
void precomputeFactorials() {
        fact[0] = 1;
        for (int i = 1; i <= N; i++) {
            fact[i] = (i * fact[i - 1]) % MOD;
        }
    invFact[N] = bin_exp(fact[N], MOD - 2, MOD);
        for (int i = N - 1; i >= 1; i--) {
            invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
        }
        invFact[0] = 1;
    }

int nCr(int n, int r, int mod) {
    if (r > n) return 0;
    return fact[n] * invFact[r] % mod * invFact[n - r] % mod;
}
signed main(){
    fastread();
    precomputeFactorials();
    int t;cin>>t;
    while(t--){
        int n,m,k;cin>>n>>m>>k;
        vector<int>v(n);
        for (int i = 0; i <n ; ++i) {
        cin>>v[i];
        }
        sort(v.begin(),v.end());
        int cnt=0;
        for (int l = 0; l < n; ++l) {
            int r = upper_bound(v.begin(), v.end(), v[l] + k) - v.begin();
            int len=r-l;
            if(len>=m){
                cnt=(cnt+ nCr(len-1,m-1,MOD))%MOD;
            }
        }
        cout<<cnt<<endl;
    }
}