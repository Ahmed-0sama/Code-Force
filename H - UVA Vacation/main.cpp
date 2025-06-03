#include <vector>
#include <bits/stdc++.h>
using namespace std;

//#define endl '\n'
//#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N = 101;
const int INF = LLONG_MIN;
//int MOD=1e9+7;
int dp[N][N];
int n;
string x;
string s;
int solve(int current,int previous){
    if(current==s.size())return 0;
    if(previous != -1 &&dp[current][previous]!=-1) return dp[current][previous];
    int res= solve(current+1,previous);
    if(previous==-1||(s[current] == x[previous])){
        res=max(res,solve(current+1,current)+1);
    }
    if (previous != -1) {
        return dp[current][previous] = res;
    }
    return res;
}
signed main(){
    fastread();
    int index=1;
    while(true){
        cin >> s;
        if (s[0] == '#') break;
        cin >> x;
        memset(dp, -1, sizeof dp);
        cout <<"Case # "<<index++<<": you can visit at most " <<solve(0, -1) <<" cities."<< endl;
    }
    return 0;
}