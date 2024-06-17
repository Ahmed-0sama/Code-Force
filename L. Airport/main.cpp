#include <iostream>
#include <algorithm>
using namespace std;

int max(int arr[], int n, int m) {
    int val = 0;
    int count = 0;
    while (n--) {
        sort(arr, arr + m, greater<int>());
        count += arr[val];
        arr[val]--;
    }
    return count;
}

int min(int arr[], int n, int m) {
    int val = 0;
    int count = 0;
    while (n--) {
        sort(arr, arr + m);
        if (arr[val] == 0) {
            val++;
            count += arr[val];
            arr[val]--;
        } else {
            count += arr[val];
            arr[val]--;
        }
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr[m];
    int arr_copy[m]; // Copy of the original array
    for (int i = 0; i < m; ++i) {
        cin >> arr[i];
        arr_copy[i] = arr[i]; // Copying each element
    }
    cout << max(arr, n, m) << " ";
    cout << min(arr_copy, n, m) << endl; // Passing the copy of the original array

    return 0;
}
