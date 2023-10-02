#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(9);

    double R;
    cin >> R;

    double pi = 3.141592653;
    double area = pi * R * R;

    cout << area << endl;

    return 0;
}
