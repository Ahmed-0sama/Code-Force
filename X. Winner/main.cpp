#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL))
struct Round {
    string name;
    int score;
};

signed main() {
    fastread();
    int t;
    cin >> t;
    vector<Round> rounds(t);
    unordered_map<string, int> scores;

    for (int i = 0; i < t; ++i) {
        cin >> rounds[i].name >> rounds[i].score;
    }
    for (const auto& round : rounds) {
        scores[round.name] += round.score;
    }
    int max = LLONG_MIN;
    for (const auto& entry : scores) {
        if (entry.second > max) {
            max = entry.second;
        }
    }
    scores.clear();
    for (const auto& round : rounds) {
        scores[round.name] += round.score;
        if (scores[round.name] >= max) {
            cout << round.name << endl;
            break;
        }
    }

    return 0;
}