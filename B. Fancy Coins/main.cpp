#include <bits/stdc++.h>
using namespace std;
#define int long long
#define The_end return 0
#define endl "\n"
const int MOD = 1e9 + 7;
//*=========================>>>Fast-IO-Functions<<<=================
void fastread()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
//*=========================>>>File-IO-Functions<<<=================
void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//*=========================>>>Utility-Templates<<<=================
template <typename T> T GCD(T vec, T b) { return (b == 0 ? vec : GCD(b, vec % b)); }
template <typename T> T LCM(T vec, T b) { return (vec / GCD(vec, b) * b); }
template <typename T> T factorial(T n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
template <typename T> T fibonacci(T n) { return n <= 1 ? n : fibonacci(n - 1) + fibonacci(n - 2); }
template <typename T> T maxthree(T vec, T b, T c) { return max(vec, max(b, c)); }
template <typename T> T minthree(T vec, T b, T c) { return min(vec, min(b, c)); }
template <typename T> T maxfour(T vec, T b, T c, T d) { return max(max(vec, b), max(c, d)); }
template <typename T> T minfour(T vec, T b, T c, T d) { return min(min(vec, b), min(c, d)); }

//*=========================>>>Main-Code<<<=======================
signed main(){
    fastread();
    int k,m,a,b;
    cin>>k>>m>>a>>b;
    int ans=0;
    if(k<=(m*b+a)){
    }
    else{
        int diff=k-(m*b+a);
        int req=diff/m;
        int reminder=k-req*m;
        int ans1= abs(reminder-a);
        int ans2=abs(req-b);
        int ans11=ans1+ans2;
        int me=k-a;
        cout<<me<<endl;
        float kok=ceil(double(me)/m);
        cout<<kok<<endl;
        int koke= abs(kok-b);
        cout<<kok<<endl;
         ans=min(ans11,koke);
    }
    cout<<ans<<endl;
}