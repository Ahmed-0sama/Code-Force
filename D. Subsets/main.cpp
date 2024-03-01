#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printSubsets(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int mask = 0; mask < (1 << n); ++mask) {
        vector<int> subset;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                subset.push_back(arr[i]);
            }
        }
        sort(subset.begin(), subset.end()); // Sort the subset before printing
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    printSubsets(arr);
    return 0;
}
