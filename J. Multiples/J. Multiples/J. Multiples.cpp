#include <iostream>

int main()
{
	long long x, y;
	std::cin >> x >> y;
	if (x % y == 0) {
		std::cout << "Multiples";
	}
	else if (y % x == 0) {
		std::cout << "Multiples";
	}
	else {
		std::cout << "No Multiples";
	}
	return 0;
}
