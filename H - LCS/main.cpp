#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int N=1e4;
int v[N],w[N],dp[N][N];
string s;
string t;
int rec(int i,int j){
    if(i==s.size()||j==t.size())return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=INT_MIN;
    if(s[i]==t[j]){
        ans=rec(i+1,j+1)+1;
    }
    ans=max(rec(i+1,j),ans);
    ans=max(rec(i,j+1),ans);
    return dp[i][j]=ans;
}
void print(int i,int j){
    if(i==s.size()||j==t.size())return;
    if(s[i]==t[j]) {
        if (dp[i][j] == rec(i + 1, j + 1) + 1) {
            cout << s[i];
            print(i + 1, j + 1);
            return;
        }
    }
   if(dp[i][j]==dp[i+1][j]){
     print(i+1,j);
     return;
   }
   if(dp[i][j]==dp[i][j+1]){
     print(i,j+1);
     return;
   }
}
signed main(){
    fastread();
    cin>>s;
    cin>>t;
    memset(dp,-1,sizeof dp);
    rec(0,0);
    print(0,0);
}