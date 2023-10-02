#include <iostream>

int main()
{
    int a;
    std::cin >> a; 
    if (a % 2 == 0) {
        for (int  i = 1; i < a; i++)
        {
            std::cout << "a ";

        }
        std::cout << "b ";
    }
    else {
        for (int  i = 1; i <=a; i++)
        {
            std::cout << "a ";
        }
    }
    return 0;
}
