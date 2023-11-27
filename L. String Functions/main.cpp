#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    string x;
    cin >> x;

    for (int i = 0; i < Q; i++) {
        string query;
        cin >> query;

        if (query == "pop_back") {
            x.pop_back();
        } else if (query == "front") {
            cout << x[0] << endl;
        } else if (query == "back") {
            cout << x[x.length() - 1] << endl;
        } else if (query == "sort") {
            int k, l;
            cin >> k >> l;
            sort(x.begin() + k - 1, x.begin() + l);
        } else if (query == "reverse") {
            int k, l;
            cin >> k >> l;
            reverse(x.begin() + k - 1, x.begin() + l);
        } else if (query == "print") {
            int pos;
            cin >> pos;
            cout << x[pos - 1] << endl;
        } else if (query == "substr") {
            int k, l;
            cin >> k >> l;
            cout << x.substr(k - 1, l - k + 1) << endl;
        } else if (query == "push_back") {
            char n;
            cin >> n;
            x += n;
        }
    }

    return 0;
}