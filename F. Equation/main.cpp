#include <iostream>
#include <cmath>

using namespace std;

long long calculate_equation(int X, int N) {
    long long result = 0;
    int power_of_X = 0;

    for (int i = 0; i <= N; i += 2) {
        result += static_cast<long long>(pow(static_cast<double>(X), static_cast<double>(power_of_X)));
        power_of_X += 2;
    }

    return result;
}

int main() {
    int X, N;
    cin >> X >> N;

    long long result = calculate_equation(X, N);
    cout << result-1 << endl;

    return 0;
}