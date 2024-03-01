#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;

    map<string, int> dataCount;

    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;

        if (dataCount[name] == 0) {
            dataCount[name] = 1;
            cout << "OK" << endl;
        } else {
            int suffix = dataCount[name]++;
            string newName = name + to_string(suffix);
            cout << newName << endl;
        }
    }

    return 0;
}
