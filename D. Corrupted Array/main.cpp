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
    int t;cin>>t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n + 2);
        int sum = 0;
        map<int,int>mp;
        for (int i = 0; i < n + 2; ++i) {
            cin >> v[i];
            sum += v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
       int option1=v[n+1];
       int option2=v[n];
       int trick1=sum-option1;
       int trick2=sum-option2;
       if(mp[trick1-option1]!=0){
           if(option1==trick1-option1&&mp[trick1-option1]<=1) {
               cout<<"-1"<<endl;
               continue;
           }
           mp[trick1-option1]--;
           mp[option1]--;
           for (const auto &entry : mp) {
               for (int i = 0; i < entry.second; ++i) {
                   cout << entry.first<<' ';
               }
           }
           cout<<endl;
       }
       else if(mp[trick2-option2]!=0){
           if(option2==trick2-option2&&mp[trick2-option2]<=1) {
               cout<<"-1"<<endl;
               continue;
           }
           mp[trick2-option2]--;
           mp[option2]--;
           for (const auto &entry : mp) {
               for (int i = 0; i < entry.second; ++i) {
                   cout << entry.first<<' ';
               }
           }
           cout<<endl;
       }
       else{
           cout<<"-1"<<endl;
       }
    }
}