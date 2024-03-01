#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string arr[n + 1][m + 1];
    bool flag = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            arr[i][j] = ".";

            if (i % 2 != 0) {
                arr[i][j] = "#";
            } else {
                if (!flag && j == m) {
                    arr[i][j] = "#";
                } else if (flag && j == 1) {
                    arr[i][j] = "#";
                }
            }
        }

        if (i % 2 == 0) {
            flag = !flag;
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
