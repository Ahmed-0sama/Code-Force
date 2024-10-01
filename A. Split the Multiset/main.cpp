#include <iostream>
#include <queue>
#include <vector>

using namespace std;
#define int long long

void fastread() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        priority_queue<int> pq;
        pq.push(n);
        int count = 0;
        while (pq.size() < n) {
            int current = pq.top();
            pq.pop();
            for (int i = 0; i < min(k-1, current-1); ++i) {
                pq.push(1);
            }
            pq.push(current - (min(k-1, current-1)));
            count++;
        }
        cout << count << endl;
    }
}
