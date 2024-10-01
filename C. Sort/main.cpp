#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        string a, b;
        cin >> a >> b;
        vector<vector<int>> fa(n + 1, vector<int>(26, 0));
        vector<vector<int>> fb(n + 1, vector<int>(26, 0));

        for (int i = 0; i < n; ++i) {
            fa[i + 1] = fa[i];
            fb[i + 1] = fb[i];
            fa[i + 1][a[i] - 'a']++;
            fb[i + 1][b[i] - 'a']++;
        }
        while (q--) {
            int l, r;
            cin >> l >> r;
            --l;
            vector<int> ca(26, 0), cb(26, 0);

            for (int i = 0; i < 26; ++i) {
                ca[i] = fa[r][i] - fa[l][i];
                cb[i] = fb[r][i] - fb[l][i];
            }
            int changes = 0;
            for (int i = 0; i < 26; ++i) {
                changes += abs(ca[i] - cb[i]);
            }
            cout << changes / 2 << '\n';
        }
    }
}