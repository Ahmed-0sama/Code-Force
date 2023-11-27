#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main()
{
    int A, B;
    char c;
    cin >> A >> c >> B;
    int result;
    switch (c) {
    case '+':
        result = A + B;
        break;
    case '-':
        result = A - B;
        break;
    case '*':
        result = A * B;
        break;
    case '/':
        result = A / B;
        break;
       
    
    }
    cout << result;

 
    return 0;
}

