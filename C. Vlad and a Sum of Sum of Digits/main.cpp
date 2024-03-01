#include <iostream>

int getDigitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        int totalSum = 0;
        int currentSum = 1;  // The sum of digits for the first number (1)
        int currentNumber = 1;
        int nextNumber = 10;

        while (currentNumber <= n) {
            if (currentNumber == nextNumber) {
                nextNumber *= 10;
                currentSum++;
            }
            totalSum += currentSum;
            currentNumber++;
        }

        std::cout << totalSum << std::endl;
    }

    return 0;
}