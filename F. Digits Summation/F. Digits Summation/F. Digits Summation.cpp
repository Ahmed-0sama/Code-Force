#include <iostream>

int main() {
    long long N, M;  
    std::cin >> N >> M;

    int last_digit_N = N % 10;
    int last_digit_M = M % 10;

    int sum = last_digit_N + last_digit_M;

    std::cout << sum;

    return 0;
}
