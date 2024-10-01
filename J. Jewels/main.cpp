#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> frq;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        frq[v[i]]++;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int l, r, x, z;
        cin >> l >> r >> x >> z;

        unordered_map<int, int> count;
        for (int j = l - 1; j < r; ++j) {
            count[v[j]]++;
        }
        bool found = false;
        for (int k = x; k <= z; ++k) {
            if (count.find(k) != count.end()) {
                found = true;
            } else {
                found = false;
                break;
            }
        }
        found ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
