#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double N; 

    cin >> N;
    
    if (N == floor(N)) {
        cout << "int " << static_cast<int>(N) << endl;
    }
    else {
        int integerPart = static_cast<int>(N);
        double decimalPart = N - integerPart;
        cout << "float " << integerPart << " " << decimalPart << endl;
    }

    return 0;
}
