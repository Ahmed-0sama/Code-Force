#include <iostream>
#include <vector>
using namespace std;

vector<int> findSequence(long long n) {
    vector<int> sequence;
    sequence.push_back(n); // Start with n itself

    int current = n;
    while (true) {
        int next = (current - 1) & n; // Find the next number
        if (next <= 0 || next >= current) // Check if valid and strictly increasing
            break;
        sequence.push_back(next);
        current = next;
    }

    return sequence;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<int> sequence = findSequence(n);

        cout << sequence.size() << endl;
        for (int i = 0; i < sequence.size(); ++i) {
            cout << sequence[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
