#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N=1e4;
int MOD=1e9+7;
int dp[N][N];
int n;
vector<double>v(n);
double solve(int i,int heads) {
    if (i == n) {
        return (heads*(n/2));
    }
    double res=(solve(i+1,heads+1)*v[i]+ solve(i+1,heads)*(1*v[i]));
    return res;
}

signed main(){
    cin>>n;
    v.resize(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    for (int i = 0; i < ; ++i) {
        
    }
}