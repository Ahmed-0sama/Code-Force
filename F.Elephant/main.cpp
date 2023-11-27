#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;

    int steps = ceil(static_cast<double>(x) / 5);

    cout << steps;

    return 0;
}
