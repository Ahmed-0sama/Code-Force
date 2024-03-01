#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[i] = x;
        }
        map<int, vector<char>> m;
        string s = "";
        for (auto c : v) {
            if (m[c].size() == 0) {
                m[c].push_back('a');
                s += 'a';
            } else {
                m[c].push_back(m[c].back() + 1);
                s += m[c].back();
            }
        }
        cout << s << endl;
    }

    return 0;
}
