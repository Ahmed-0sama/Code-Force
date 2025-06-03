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
//        int n;
//        cin >> n;
//        deque<int> d;
//        for (int i = 0; i < n; ++i) {
//            int x;
//            cin >> x;
//            d.push_back(x);
//        }
//        int last = d.back();
//        d.pop_back();
//        d.push_front(last);
//        vector<int> v(n);
//        for (int i = 0; i < n; ++i) {
//            int x = d.front();
//            d.pop_front();
//            v[i] = x;
//        }
//    for (int i = 0; i <n ; ++i) {
//        cout<<v[i]<<' ';
//    }
//    cout<<endl;
//        vector<int> ans;
//        while (v.size() != 0) {
//            if (v.size() % 2 == 0) {
//                if (v[v.size() / 2] >= v[v.size() / 2-1]) {
//                    int x = v[v.size() / 2-1];
//                    ans.push_back(x);
//                    v.erase(v.begin() + v.size() / 2-1);
//                } else {
//                    int x = v[v.size() / 2];
//                    ans.push_back(x);
//                    v.erase(v.begin() + v.size() / 2 );
//                }
//            } else {
//                int x = v[(v.size() / 2)];
//                ans.push_back(x);
//                v.erase(v.begin() + v.size() / 2);
//            }
//        }
//    for (int i = 0; i <n ; ++i) {
//        cout<<ans[i]<<' ';
//    }
//        bool sorted =is_sorted(ans.begin(),ans.end());
//        sorted ? cout << "YES" << endl : cout << "NO" << endl;
        int n;cin>>n;
        vector<int>v(n);

        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
        }
        vector<int> sortv = v;
        sort(sortv.begin(), sortv.end());
        if(n%2!=0) {
            for (int i = 0; i < n; i ++) {
                if(v[i]!=sortv[i]){
                    if (i%2!=0) {
                        swap(v[i], v[i + 1]);
                    }
                }
            }
        }else{
            for (int i = 0; i <n ; ++i) {
                if(v[i]!=sortv[i]) {
                    if (i % 2 == 0) {
                        swap(v[i], v[i + 1]);
                    }
                }
            }
        }
        bool sort=is_sorted(v.begin(),v.end());
        sort?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}