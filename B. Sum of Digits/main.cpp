#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    string n;
    cin >> n;
    int ans = 0;

    while (n.length() > 1) {
        int sum = 0;
        for (char c : n) {
            sum += c - '0';
        }
        n = to_string(sum);
        ans++;
    }

    cout << ans << endl;
}

