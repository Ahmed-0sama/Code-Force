#include <iostream>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    int maxHeight = 0;

    for (int i = 0; i < N; ++i) {
        int len;
        cin >> len;
        arr[len]++;
        maxHeight = max(maxHeight, arr[len]);

    }
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << maxHeight << " " << size << endl;

    return 0;
}