#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int result = 1;
    int base = 5;

    
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % 100;
        }
        base = (base * base) % 100;
        n /= 2;
    }
    cout << result;

    return 0;
}
