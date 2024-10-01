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
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int q;cin>>q;
        int start = 0;
        vector<char> results;
        for (int i = 0; i < q; ++i) {
            int event_type;
            cin >> event_type;
            if (event_type == 1) {
                int x;
                cin >> x;
                start = (start + x) % n;
            } else if (event_type == 2) {
                int idx;
                cin >> idx;
                idx--;
                int effective_idx = (start + idx) % n;
                results.push_back(s[effective_idx]);
            }
        }
        for (char c : results) {
            cout << c << '\n';
        }
    }
}