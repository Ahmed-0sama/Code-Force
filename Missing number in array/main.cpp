#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(vector<int>& array, int n) {
    int sum1 = n * (n + 1) / 2;
    int sum2 = 0;
    for (int i = 0; i < array.size(); i++) {
        sum2 += array[i];
    }
    return sum1 - sum2;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int missingNum = findMissingNumber(arr, n + 1);
    cout << "Missing number: " << missingNum << endl;
    return 0;
}
