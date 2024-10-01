#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1e6;
int fact[N];
int inv[N];
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
int binary_power(int base,int expo){
    int res=1;
    while(expo){
        if(expo&1){
            res=res*base;
        }
        base=base*base;
        expo>>=1;
    }
    return res;
}
void build(){
    fact[0]=fact[1]=1;
    for (int i = 2; i <N ; ++i) {
        fact[i]=i*fact[i-1];
        inv[i]= binary_power(fact[i],)
    }
}
int ncr(int n,int r){

}
signed main(){
   int n;cin>>n;
   vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }

}