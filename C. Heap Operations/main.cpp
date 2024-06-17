#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 3e5 + 10;
int main() {
    int n, m, x;
    string s, str[maxn];
    priority_queue<int, vector<int>, greater<int>> q;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s[0] == 'i') {
            cin >> x;
            q.push(x);
            str[++m] = "insert " + to_string(x);
        } else if (s[0] == 'g') {
            cin >> x;
            while (q.size() && q.top() < x) {
                str[++m] = "removeMin";
                q.pop();
            }
            if (q.empty() || q.top() > x) {
                q.push(x);
                str[++m] = "insert " + to_string(x);
            }
            str[++m] = "getMin " + to_string(x);
        } else {
            if (q.empty()) {
                q.push(1);
                str[++m] = "insert 1";
            }
            q.pop();
            str[++m] = "removeMin";
        }
    }
    cout << m << endl;
    for (int i = 1; i <= m; i++) cout << str[i] << endl;
    return 0;
}