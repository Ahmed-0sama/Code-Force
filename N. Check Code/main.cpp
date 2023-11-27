#include <iostream>
#include <string>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;

    string S;
   cin >> S;

    if (S.length() != A + B + 1 || S[A] != '-') {
       cout << "No" << std::endl;
        return 0;
    }

    for (int i = 0; i < S.length(); i++) {
        if (i != A && (S[i] < '0' || S[i] > '9')) {
            cout << "No" << std::endl;
            return 0;
        }
    }

    cout << "Yes" << std::endl;
    return 0;
}
