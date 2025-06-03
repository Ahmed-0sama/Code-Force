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
bool preceed(pair<int, int> a, pair<int, int> b) {
    // Sort by frequency first (higher is better), then by value (lower is better)
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;  // Higher frequency comes first
}
signed main(){
    fastread();
    int t;cin>>t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            mp[v[i]]++;
        }
        vector<pair<int, int>> freqVec;
        for (const auto &i: mp) {
            freqVec.push_back({i.second, i.first}); // {frequency, value}
        }
        sort(freqVec.begin(), freqVec.end(), preceed);
        int cnt = 0;
        for (int i = 0; i < k && i < freqVec.size(); ++i) {
            cnt += freqVec[i].first;
        }
        cout << cnt << endl;
    }
}