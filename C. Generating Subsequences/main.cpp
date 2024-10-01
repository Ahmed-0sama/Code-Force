#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <climits>
#include <algorithm>
#include <stack>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL))
void generate_subsequences(int index, string s, string current, vector<string> &subsequences) {
    if (index == s.size()) {
        if (!current.empty()) {
            subsequences.push_back(current);
        }
        return;
    }
    generate_subsequences(index + 1, s, current + s[index], subsequences);
    generate_subsequences(index + 1, s, current, subsequences);
}

signed main() {
    fastread();
    string s;
    cin >> s;
    vector<string> subsequences;
    generate_subsequences(0, s, "", subsequences);
    sort(subsequences.begin(), subsequences.end());
    for (const auto& subseq : subsequences) {
        cout << subseq << endl;
    }
    return 0;
}