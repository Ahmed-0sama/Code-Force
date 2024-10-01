#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        vector<int> q(n);
        for (int i = 0; i < n; ++i) {
            q[i] = p[(i + 1) % n];
        }
        for (int i = 0; i < n; ++i) {
            cout << q[i] << " ";
        }
        cout <<endl;
    }
    return 0;
}
