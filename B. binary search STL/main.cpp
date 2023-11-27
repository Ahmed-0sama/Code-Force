#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int size, query;
    cin >> size >> query;

    vector<int> vec(size);

    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;
        vec[i]=x;
    }
    sort(vec.begin(), vec.end());

    while (query--) {
        string s;
        cin >> s;

        if (s == "lower_bound") {
            int val;
            cin >> val;
            auto it = lower_bound(vec.begin(), vec.end(), val);

            if (it != vec.end()) {
                cout << *it << endl;
            } else {
                cout << "-1" << endl;
            }
        } else if (s == "upper_bound") {
            int val;
            cin >> val;
            auto it = upper_bound(vec.begin(), vec.end(), val);

            if (it != vec.end()) {
                cout << *it << endl;
            } else {
                cout << "-1" << endl;
            }
        } else if (s == "binary_search") {
            int val;
            cin >> val;
            bool res = binary_search(vec.begin(), vec.end(), val);

            if (res) {
                cout << "found" << endl;
            } else {
                cout << "not found" << endl;
            }
        }
    }

    return 0;
}
