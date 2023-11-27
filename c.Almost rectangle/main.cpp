#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    float area_rec = a * b;
    float height = b - d;
    float base = a - c;
    float area_triangle = 0.5 * (base * height);
    float area = area_rec - area_triangle;

    // Set the output to display 6 decimal places
    cout << fixed << setprecision(6) << area;

    return 0;
}
