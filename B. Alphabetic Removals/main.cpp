#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int removed = 0;

    for (char ch = 'a'; ch <= 'z'; ++ch) {
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ch) {
                s.erase(i, 1);
                removed++;
                i--;
                if (removed == k)
                    break;
            }
        }
        if (removed == k)
            break;
    }

    cout << s << endl;

    return 0;
}
