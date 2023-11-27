// L. The Brothers.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>

int main()
{
    std::string a,b,c,d;
    std::cin >> a >> b >> c >> d;
    if (b == d) {
       std:: cout << "ARE Brothers";
    }
    else {
        std::cout << "NOT";
    }
    return 0;
}

