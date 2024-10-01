#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        unordered_map<int, int> index;
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
            index[arr[i]] = i;
        }
        int Q;
        cin >> Q;
        int offset = 0;
        while (Q--) {
            int q;
            cin >> q;
            if (q == 1) {
                int k;
                cin >> k;
                offset = (offset - k % N + N) % N;
            } else if (q == 2) {
                int x;
                cin >> x;
                if (index.find(x) == index.end()) {
                    cout << "-1" << endl;
                } else {
                    int original_index = index[x];
                    int actual_index = (original_index - offset + N) % N + 1;
                    cout << actual_index << endl;
                }
            }
        }
    }
    return 0;
}