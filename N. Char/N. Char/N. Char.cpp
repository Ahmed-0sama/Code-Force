// N. Char.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cctype>

int main()
{
    char a;
    std::cin >> a;
    if (std::isupper(a)) {
       a= std::tolower(a);
    }
    else {
       a=  std::toupper(a);

    }
    std::cout << a;
    return 0;
}
