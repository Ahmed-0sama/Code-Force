#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <cctype>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    auto isUnwantedChar = [](char c) {
        return c == '!' || c == '.' || c == '?' || c == ',';
    };
    s.erase(remove_if(s.begin(), s.end(), isUnwantedChar), s.end());

    stringstream ss(s);
    string word;
    int wordCount = 0;
    while (ss >> word) {
        wordCount++;
    }

    cout << wordCount << endl;

    return 0;
}
