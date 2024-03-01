#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    while (getline(cin,s)) {
        string monitor;
        int index = 0;
        for (char c: s) {
            if (c == '[') {
                index = 0;
            } else if (c == ']') {
                index =monitor.size();

            } else {
                monitor.insert(monitor.begin() + index, c);
                index++;
            }
        }

        cout << monitor << endl;
    }
    return 0;
}
