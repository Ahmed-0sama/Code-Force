#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[5] = {0};
    int groupSize;
    for (int i = 0; i < n; ++i) {
        cin >> groupSize;
        arr[groupSize]++;
    }

    int count = arr[4];
    count += arr[3];

    arr[1] = max(0, arr[1] - arr[3]);
    count += (arr[2] * 2 + arr[1] + 3) / 4;

    cout << count << endl;
    return 0;
}
