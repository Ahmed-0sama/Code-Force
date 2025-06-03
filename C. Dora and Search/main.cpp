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
bool compgert(pair<int, int> x, pair<int, int> y) {
    return x.first < y.first; // Descending order
}
bool compgsmal(pair<int,int>x,pair<int,int>y){
    return x.first<y.first;
}
signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>srt(n);
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            int x;cin>>x;
            srt[i]=x;
            v[i]=x;
        }
        sort(srt.begin(),srt.end());
        int l=0,r=n-1;
        int l1=0,r1=n-1;
        while((v[l]==srt[l1]||v[l]==srt[r1]||v[r]==srt[l1]||v[r]==srt[r1])&&(r-l>2)){
            if(v[l]==srt[l1]){
                l++,l1++;
            }
            else if(v[l]==srt[r1]){
                l++,r1--;
            }
            else if(v[r]==srt[l1]){
                r--,l1++;
            }
            else{
                r--,r1--;
            }
        }
        if(r-l<=2){
            cout<<"-1"<<endl;
        }
        else{
            cout<<l+1<<" "<<r+1<<endl;
        }
    }
}