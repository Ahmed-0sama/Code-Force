#include <iostream>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2;
    long long evenCount = n / 2;

    if (k <= oddCount) {
        // Number at position k is an odd number
        cout << 2 * k - 1;
    } else {
        // Number at position k is an even number
        cout << 2 * (k - oddCount);
    }

    return 0;
}
