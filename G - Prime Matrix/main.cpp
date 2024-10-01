#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1e6;
bool prime[N];
void sieve(){
    for (int i = 0; i <N ; ++i) {
        prime[i]=true;
    }
    prime[0]=prime[1]=false;
    for (int i = 2; i*i <N ; ++i) {
        if(prime[i]){
            for (int j = i*i; j <N ; j+=i) {
                prime[j]=false;
            }
        }
    }
}
signed main() {
    fastread();
    sieve();
    int n,m;cin>>n>>m;
    int mat[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <m ; ++j) {
            cin>>mat[i][j];
        }
    }
    int cnt=INT_MAX;
    for (int i = 0; i <n ; ++i) {
        int sol=0;
        for (int j = 0; j <m ; ++j) {
            int ans=mat[i][j];
                while(!prime[ans]){
                    ans++;
                    sol++;
                }
        }
        cnt=min(cnt,sol);
    }
    int cnt2=INT_MAX;
    for (int j = 0; j <m ; ++j) {
        int sol=0;
        for (int i = 0; i <n ; ++i) {
            int ans=mat[i][j];
            while(!prime[ans]){
                ans++;
                sol++;
            }
        }
        cnt2=min(cnt2,sol);
    }
    cout<<min(cnt,cnt2)<<endl;
}