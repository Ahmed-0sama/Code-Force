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
const int N=1e8;
const int MOD=100;
bool prime[N];
vector<int>v;
void sieve(){
    for (int i = 0; i <N ; ++i) {
        prime[i]=true;
    }
    prime[0]=prime[1]=false;
    for (int i = 2; i*i<N ; ++i) {
        if(prime[i]){
            for (int j = i*i; j <N ; j+=i) {
                prime[j]=false;
            }
        }
    }
    for (int i = 2; i <N ; ++i) {
        if(prime[i])v.push_back(i);
    }
}
signed main() {
    fastread()
    sieve();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int sum=0;
        for (int i = 0; i <=N ; ++i) {
            if(v[i]>n){
                break;
            }
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
}