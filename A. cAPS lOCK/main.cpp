#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool flag1 = true;
    bool flag2 = true;

    for (int i = 1; i < s.size(); ++i) {
        if (!isupper(s[i])) {
            flag1 = false;
            break;
        }
    }


    for (char c : s) {
        if (!isupper(c)) {
            flag2 = false;
            break;
        }
    }
    if (islower(s[0]) && flag1) {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); ++i) {
            s[i] = tolower(s[i]);
        }
    }
    else if (flag2) {
        for (char& c : s) {
            c = tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}
