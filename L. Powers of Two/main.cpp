#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL))

bool isPowerOf2(int n) {
    return (n && !(n & (n - 1)));
}

signed main() {
    fastread();
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> powersOf2;
    for (int i = 0; i < 63; ++i) {
        powersOf2.push_back(1LL << i);
    }

    unordered_map<int, int> freq;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (const auto& power : powersOf2) {
            int complement = power - a[i];
            if (freq.find(complement) != freq.end()) {
                count += freq[complement];
            }
        }
        freq[a[i]]++;
    }

    cout << count << endl;
    return 0;
}
