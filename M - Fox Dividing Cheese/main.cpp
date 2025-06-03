#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
//const int N=1e4;
//int MOD=1e9+7;
//int dp[N][N];
//int n,weight;
//vector<vector<int>>v(n);
int lowest_Common_Divisor(int n) {
    if (n % 2 == 0) return 2;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return i;
    }
    return n;
}
int arr[6];
signed main(){
    int a,b;cin>>a>>b;
    int t=0;
    while(a%2==0){
        arr[2]++;
        a/=2;
    } while(a%3==0){
        arr[3]++;
        a/=3;
    }
    while(a%5==0){
        arr[5]++;
        a/=5;
    } while(b%2==0){
        arr[2]--;
        b/=2;
    }
    while(b%3==0){
        arr[3]--;
        b/=3;
    }
    while(b%5==0){
        arr[5]--;
        b/=5;
    }
    if(a!=b)cout<<"-1"<<endl;
    else cout<<(abs(arr[2])+abs(arr[3])+abs(arr[5]))<<endl;

}