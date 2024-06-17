#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <deque>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL))

signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> dq;
        for (int i = 1; i <= n; i++) {
            dq.push_back(i);
        }
        vector<int> v;
        while (dq.size() > 1) {
            v.push_back(dq.front());
            dq.pop_front();
            dq.push_back(dq.front());
            dq.pop_front();
        }
        for (int i = 0; i <v.size() ; ++i) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        cout<<dq.front()<<endl;
    }
}