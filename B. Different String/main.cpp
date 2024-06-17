#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        bool all_same = all_of(s.begin(), s.end(), [&](char c){ return c == s[0]; });

        if(all_same) {
            cout << "NO"<<endl;
        } else {
            cout << "YES"<<endl;

            for(int i = 1; i < s.size(); ++i) {
                if(s[i] != s[0]) {
                    swap(s[i], s[0]);
                    break;
                }
            }

            cout << s << endl;
        }
    }

    return 0;
}
