#include <iostream>
#include <vector>

using namespace std;

char findReplacedLetter(vector<string>& square) {
    for (char c = 'A'; c <= 'C'; ++c) {
        int rowOccurrences = 0, colOccurrences = 0;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (square[i][j] == c) {
                    ++rowOccurrences;
                }

                if (square[j][i] == c) {
                    ++colOccurrences;
                }
            }
        }

        if (rowOccurrences == 2 || colOccurrences == 2) {
            return c;
        }
    }

    return '?';  // Default case
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> square(3);
        for (int i = 0; i < 3; ++i) {
            cin >> square[i];
        }

        char replacedLetter = findReplacedLetter(square);
        cout << replacedLetter << endl;
    }

    return 0;
}
