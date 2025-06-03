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

signed main() {
    int t;cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int rk, pp, sc;
        cin >> rk >> pp >> sc;
        int winr=0,winp=0,winc=0;
        string s;
        cin >> s;
//    cout<<rk<<pp<<sc<<endl;
        vector<char>v(n);
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'R' && pp> 0) {
                v[i]='P';
                pp--;
                winp++;
            }
            else if (s[i] == 'P' && sc > 0) {
                v[i]='S';
                sc--;
                winc++;
            }
            else if (s[i] == 'S' && rk > 0) {
                v[i]='R';
                rk--;
                winr++;
            }
            else{
                v[i]='?';
            }
        }
        int cnt=winr+winp+winc;
        if (cnt >= (n+1)/2) {
//        cout<<ceil(double(n)/2)<<endl;
            cout << "YES" << endl;
            for (int i = 0; i < v.size(); ++i) {
                if(v[i]=='?'){
                    if(rk>0){
                        v[i]='R';
                        rk--;
                    }else if(pp>0){
                        v[i]='P';
                        pp--;
                    }
                    else{
                        v[i]='S';
                        sc--;
                    }
                }
            }
            for(char c:v){
                cout<<c;
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
    