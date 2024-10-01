#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1e6+1;
int memo[N];
int fib(int n){
    if (memo[n]!=-1)return memo[n];
    return memo[n]=fib(n-1)+fib(n-2);
}
void solve(){
    int n;cin>>n;
    memset(memo,-1,sizeof memo);
    memo[0]=0,memo[1]=1;
    cout<<fib(n)<<endl;
}
signed main(){
    fastread();
    solve();

}