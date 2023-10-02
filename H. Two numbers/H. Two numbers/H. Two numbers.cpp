#include <iostream>
#include <cmath>

int main() {
    long long x, y;
    std::cin >> x >> y;

    double result = static_cast<double>(x) / y;
    int fic = floor(result);
    int sec = ceil(result);
    int third = round(result);

    std::cout << "floor " << x << " / " << y << " = " << fic << std::endl;
    std::cout << "ceil " << x << " / " << y << " = " << sec << std::endl;
    std::cout << "round " << x << " / " << y << " = " << third << std::endl;

    return 0;
}
