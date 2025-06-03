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
const int NN=101;
const int W=1e5;
int w[NN];
int v[NN];
int memoo[NN][W];
int n,weight;
int dp(int i,int j){
    if(i==n)return  0;
    if(memoo[i][j]!=-1)return memoo[i][j];
    memoo[i][j]=dp(i+1,j);
    if(j+w[i]<=weight){
        memoo[i][j]=max(memoo[i][j],v[i]+dp(i+1,j+w[i]));
    }
    return memoo[i][j];
}
void solvee(){cin>>n>>weight;
    cin>>n>>weight;
    memset(memoo,-1,sizeof memoo);
    for (int i = 0; i <n ; ++i) {
        cin>>w[i]>>v[i];
    }
    cout<<dp(0,0);
}
void solve(){
    int n;cin>>n;
    memset(memo,-1,sizeof memo);
    memo[0]=0,memo[1]=1;
    cout<<fib(n)<<endl;
}
signed main(){
    fastread();
    solvee();

}