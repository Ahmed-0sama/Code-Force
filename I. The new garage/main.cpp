#include <bits/stdc++.h>
using namespace std;

void speed() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool canBuildStack(const vector<int>& heights) {
    int n = heights.size();
    stack<int> ss;
    int c = 1;
    int maxx = 0;

    for (int i = 0; i < n; i++) {
        int x = heights[i];
        if (x > maxx) {
            maxx = x;
            for (int j = c; j <= maxx; j++) {
                ss.push(j);
            }
            ss.pop();
            c = maxx + 1;
        } else {
            if (ss.empty() || ss.top() != x) {
                return false;
            } else {
                ss.pop();
            }
        }
    }

    return true;
}

int main() {
    speed();
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    if (canBuildStack(heights)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
