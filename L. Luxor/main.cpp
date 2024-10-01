#include <iostream>
#include <vector>
using namespace std;

int calc(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int count_odd_digit_sums_up_to(int x) {
    int count = 0;
    for (int i = 1; i <= x; i++) {
        if (calc(i) % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    vector<int> results(T);

    for (int t = 0; t < T; ++t) {
        int L, R;
        cin >> L >> R;
        int result = count_odd_digit_sums_up_to(R) - count_odd_digit_sums_up_to(L - 1);
        results[t] = result;
    }

    for (const auto& res : results) {
        cout << res << endl;
    }

    return 0;
}
