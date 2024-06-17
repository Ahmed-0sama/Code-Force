#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> subset;
    for (int mask = 0; mask <(1<<n) ; ++mask) {
        for (int i = 0; i <n ; ++i) {
            if(mask & (1<<i)){
                subset.push_back(v[i]);
            }
        }
    }
    sort(subset.begin(),subset.end());
    for (int num : subset) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
