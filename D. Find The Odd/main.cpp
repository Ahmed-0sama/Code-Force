#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    int n, num =0;; cin >> n ;
    vector<int> v(n) ;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; ++i) {
        num ^= v[i] ;
    }
    cout << num ;
}