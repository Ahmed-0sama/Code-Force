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
const int N=1e9;
bool prime[N];
vector<int>v;
void sieve(){
    for (int i = 0; i <N ; ++i) {
        prime[i]=true;
    }
    prime[0]=prime[1]=false;
    for (int i = 2; i*i <N ; ++i) {
        if(prime[i]){
            for (int j = i*i; j <N ; ++j) {
                prime[j]=false;
            }
        }
    }
    for (int i = 2; i <N ; ++i) {
        if(prime[i])v.push_back(i);
    }
}
vector<pair<int,int>>factorize(int n){
    vector<pair<int,int>>factors;
    for (int i = 2; i *i<=n ; ++i) {
        int power=0;
        while(n%i==0){
            power++;
            n/=i;
        }
        if(power>0)factors.emplace_back(i,power);
    }
    if(n!=1)factors.emplace_back(n,1);
    return factors;
}
signed main(){
    fastread();
    while(true) {
        int n;
        cin >> n;
        if (n == 0)break;
        else {
            vector<pair<int, int>> primeFactors = factorize(n);
            for (pair<int, int> f: primeFactors) {
                cout << f.first << "^" << f.second <<' ';
            }
            cout<<endl;
        }
    }
}