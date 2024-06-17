#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> rated_numbers = {1, 2, 3, 4, 5, 6,7, 8,9,10,11, 12,13,14,16,17,18,19, 22,23, 24,25};
    int n;
    cin >> n;
    if (rated_numbers.find(n) != rated_numbers.end()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
