#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bs(vector<int>& v, int value) {
    int low = 0;
    int high = v.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] <= value) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low;
}

int main() {
    int size;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int days;
    cin >> days;
    for (int i = 0; i < days; i++) {
        int value;
        cin >> value;
        cout << bs(v, value) << endl;
    }

    return 0;
}