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
double calcarea(double height,double base){
    return (0.5*base*height);
}
signed main() {
    fastread();
    int t;cin>>t;
    while(t--){
        int n,d,h;
        cin>>n>>d>>h;
        vector<int>v(n);
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
        }
        double area=0;
        for (int i = 0; i <n ; ++i) {
            if((i!=n-1)&&(v[i]+h>v[i+1])){
                area+= calcarea(h,d);
                double newheight=v[i]+h-v[i+1];
                double newbase=d*(double(newheight))/h;
                area-= calcarea(newheight,newbase);
            }else{
                area+= calcarea(h,d);
            }
        }
        cout<<fixed<<setprecision(8)<<area<<endl;
    }
}