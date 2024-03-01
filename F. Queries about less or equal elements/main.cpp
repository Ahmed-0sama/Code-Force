#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int sizea, sizeb;
    cin >> sizea >> sizeb;
    vector<long long> va(sizea);
    vector<long long> vb(sizeb);

    for (int i = 0; i < sizea; i++) {
        long long x;
        cin >> x;
        va[i] = x;
    }

    for (int i = 0; i < sizeb; i++) {
        long long x;
        cin >> x;
        vb[i] = x;
    }

    sort(va.begin(), va.end());

    for (int i = 0; i < sizeb; i++) {
        long long count = upper_bound(va.begin(), va.end(), vb[i]) - va.begin();
        cout << count << " ";
    }

    return 0;
}
