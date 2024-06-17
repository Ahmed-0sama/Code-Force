#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

void matrices_multiplication(const vector<vector<int>>& a, const vector<vector<int>>& b, vector<vector<int>>& c, int ra, int ca, int rb, int cb, int size) {
    if (size == 1) {
        c[ra][cb] += a[ra][ca] * b[rb][cb];
        return;
    }

    int newSize = size / 2;

    matrices_multiplication(a, b, c, ra, ca, rb, cb, newSize);
    matrices_multiplication(a, b, c, ra, ca + newSize, rb + newSize, cb, newSize);

    matrices_multiplication(a, b, c, ra, ca, rb, cb + newSize, newSize);
    matrices_multiplication(a, b, c, ra, ca + newSize, rb + newSize, cb + newSize, newSize);

    matrices_multiplication(a, b, c, ra + newSize, ca, rb, cb, newSize);
    matrices_multiplication(a, b, c, ra + newSize, ca + newSize, rb + newSize, cb, newSize);

    matrices_multiplication(a, b, c, ra + newSize, ca, rb, cb + newSize, newSize);
    matrices_multiplication(a, b, c, ra + newSize, ca + newSize, rb + newSize, cb + newSize, newSize);
}

signed main() {
    fastread();
    int ra, ca;
    cin >> ra >> ca;
    vector<vector<int>> a(ra, vector<int>(ca));
    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < ca; j++) {
            cin >> a[i][j];
        }
    }

    int rb, cb;
    cin >> rb >> cb;
    vector<vector<int>> b(rb, vector<int>(cb));
    for (int i = 0; i < rb; i++) {
        for (int j = 0; j < cb; j++) {
            cin >> b[i][j];
        }
    }

    if (ca != rb) {
        cout << "-1" << endl;
        return 0;
    }

    int size = max(ra, max(ca, max(rb, cb)));

    int newSize = 1;
    while (newSize < size) newSize <<= 1;

    vector<vector<int>> newA(newSize, vector<int>(newSize, 0));
    vector<vector<int>> newB(newSize, vector<int>(newSize, 0));
    vector<vector<int>> c(newSize, vector<int>(newSize, 0));

    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < ca; j++) {
            newA[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < rb; i++) {
        for (int j = 0; j < cb; j++) {
            newB[i][j] = b[i][j];
        }
    }

    matrices_multiplication(newA, newB, c, 0, 0, 0, 0, newSize);

    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < cb; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
