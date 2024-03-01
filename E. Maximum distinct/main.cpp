#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    string s;
    cin >> s;

    int maxDistinct = 0;
    unordered_map<char, int> freq;

    int left = 0;
    int right = 0;

    while (right < N) {

        freq[s[right]]++;

        while (right - left + 1 > k) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) {
                freq.erase(s[left]);
            }
            left++;
        }
        maxDistinct = max(maxDistinct, (int)freq.size());

        right++;
    }

    cout << maxDistinct << endl;

    return 0;
}
