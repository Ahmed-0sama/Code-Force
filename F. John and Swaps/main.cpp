#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int c = 0;
        bool flag = 0;
        int arr[n];
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr[i] = x;
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] != arr[j]) {
                    c++;
                } else {
                    flag = 1;
                }
            }
        }
        cout << c + flag << endl;
    }

    return 0;
}
