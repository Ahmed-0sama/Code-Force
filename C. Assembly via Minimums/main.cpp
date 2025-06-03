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
    fastread();
    int t=1;
//    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int iteration = (n * (n - 1) / 2);
        map<int, int> mp;
        for (int i = 0; i < iteration; ++i) {
            int x;
            cin >> x;
            mp[x]++;
        }
        int used=n;
//        for(auto i:mp){
//            cout<<i.first<<" "<<i.second;
//        }cout<<endl;
        int index = 0;
        int cnt = 0;
        vector<int> v(n);
        auto lastIndex = prev(mp.end());;
        if (mp.size() == 1) {
            auto it = mp.begin();
            for (int i = 0; i < n; ++i) {
                v[i] = it->first;
            }
            used=0;
        } else if (mp.size() == 1) {
            auto it = mp.begin();
            for (int i = 0; i < n; ++i) {
                v[i] = it->first;
            }
            used=0;
        }
        else {
            for (auto i = mp.begin(); i != mp.end(); ++i) {
                if (i == lastIndex) {
                    v[index++] = i->first;
                    v[index] = (i->first) + 1;
                    cnt += 2;
                    used-=2;
                } else if (n - cnt >= i->second) {
                    v[index++] = i->first;
                    cnt++;
                    used--;
                } else {
                    int count = n - cnt;
                    v[index++] = i->first;
                    cnt++;
                    used--;
                    while (i->second > count && index < n) {
                        v[index++] = i->first;
                        count += n - cnt;
                        cnt++;
                        used--;
                    }
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            if(v[i]>1e9){
                v[i]=1e9;
                cout << v[i] << ' ';
            }
            else{
                cout<<v[i]<<' ';
            }
        }
        cout<<endl;
    }
}