#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

signed main() {
    fastread();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i += 2) {
            if (s[i] == '_') {
                if (i == 0 || s[i - 1] == ')') {
                    s[i] = '(';
                } else {
                    s[i] = ')';
                }
            }
        }
        int cost = 0;
        stack<int> st;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    cost += i - st.top();
                    st.pop();
                }
            }
        }
        cout<<cost<<endl;
    }

    return 0;
}