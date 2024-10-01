#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int N=3005;
bool prime[N];
vector<int>v;
void sieve(){
    for (int i = 0; i <N ; ++i) {
        prime[i]= true;
    }
    prime[0]=prime[1]=false;
    for (int i = 2; i*i <N ; ++i) {
        if(prime[i]){
            for (int j = i*i; j <N ; j+=i) {
                prime[j]=false;
            }
        }
    }
    for (int i = 2; i <N ; ++i) {
        if(prime[i]){
            v.push_back(i);
        }
    }
}
int meow(int n){//count the distinct prime factors
    int cnt = 0;
    for(int p:v){
        if(p*p>n)break;
        if(n%p==0){
            cnt++;
            while(n%p==0){
                n/=p;
            }
        }
    }
    if(n>1)cnt++;

 return cnt;
}
signed main(){
    fastread();
    int n;cin>>n;
    sieve();
    int cnt=0;
    for (int i = 1; i <=n ; ++i) {
        if(meow(i)==2)cnt++;
    }
    cout<<cnt<<endl;
}