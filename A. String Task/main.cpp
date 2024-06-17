#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    string lowercase_n = n;
    for (char &c : lowercase_n) {
        c = tolower(c);
    }
    string result;
    for (int i = 0; i < lowercase_n.size(); ++i) {
        if (lowercase_n[i] != 'a' && lowercase_n[i] != 'e' && lowercase_n[i] != 'i' && lowercase_n[i] != 'o' && lowercase_n[i] != 'u' && lowercase_n[i] != 'y') {
            result += lowercase_n[i];
        }
    }
    for (int j = 0; j < result.size(); j += 2) {
        result.insert(j, ".");
    }

    cout << result << endl;

    return 0;
}
