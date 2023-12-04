#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int left = 0, right = 0;
    long long sum = 0;
    int minLength = numeric_limits<int>::max();

    while (right < n) {
        sum += A[right];

        while (sum >= m) {
            minLength = min(minLength, right - left + 1);
            sum -= A[left++];
        }

        right++;
    }

    if (minLength == numeric_limits<int>::max()) {
        cout << -1 << endl;
    } else {
        cout << minLength << endl;
    }

    return 0;
}
