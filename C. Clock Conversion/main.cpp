#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

bool isSingleDigit(int value) {
    
    return (value >= 0 && value < 10) || (value < 0 && value > -10);
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int pos = s.find(":");
        int h = stoi(s.substr(0, pos));
        int minute = stoi(s.substr(pos + 1));

        string amor = (h < 12) ? "AM" : "PM";


        if (h == 0) {
            h = 12;
        } else if (h > 12) {
            h -= 12;
        }

        if (h < 10) {
            cout << "0";
        }
        cout << h << ":";

        if (minute < 10) {
            cout << "0";
        }
        cout << minute << " " << amor << endl;
    }
    return 0;
}
