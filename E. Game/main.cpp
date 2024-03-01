#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < q; ++i) {
        int f;
        cin >> f;
        int l = 0;
        int r = n - 1;
        int in = -1;
        if (f < v[0]) {
            cout << v[0] << endl;
            continue;
        }
        while (l <= r) {
            int mid = (l + r) / 2;

            if (v[mid] == f) {
                in = mid;
                break;
            }
            if (v[mid] < f) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (in == -1) {
            if (f >= v[n - 1]) {
                cout << -1 << endl;
            } else {
                cout << v[l] << endl;
            }
        } else {
            if (in == n - 1) {
                cout << -1 << endl;
            } else {
                cout << v[in + 1] << endl;
            }
        }
    }

    return 0;
}
