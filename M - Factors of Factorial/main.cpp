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
const int N=1000;
const int MOD=1e9+7;
bool prime[N+1];
vector<int>v;
void sieve(){
    for (int i = 0; i <N ; ++i) {
        prime[i]= true;
    }
    prime[0]=prime[1]=false;
    for (int i = 2; i*i <=N ; ++i) {
        if(prime[i]){
            for (int j = i*i; j <=N; j+=i) {
                prime[j]=false;
            }
        }
    }
    for (int i = 2; i <=N ; ++i) {
        if(prime[i])v.push_back(i);
    }
}
int factorization(int n){
    vector<int>exp(v.size(),0);
    for (int i = 2; i <=n ; ++i) {
        int num=i;
        for (int j = 0; j <v.size()&& v[j] <= num ; ++j) {
            while (num % v[j] == 0) {
                exp[j]++;
                num /= v[j];
            }
        }
    }
    int result = 1;
    for (size_t i = 0; i < v.size(); ++i) {
        result = (result * (exp[i] + 1)) % MOD;
    }
    return result;
}
signed main() {
    fastread();
    sieve();
    int n;cin>>n;
    cout<<factorization(n)<<endl;
}