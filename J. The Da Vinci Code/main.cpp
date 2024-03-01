#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    ll n, x;
    cin >> n >> x;

    ll sum = 0;
    bool valid[100000+5] = {0};
    ll arr[n];
    for(int i=0;i<(int)n;i++) {
        cin >> arr[i];
    }

    ll l = 0, r = 0, len = 0;
    while (l < n) {
        while (r < n && sum <= x) {
            sum += arr[r];
            r++;
            len++;
        }
        if (sum > x)
            valid[len] = 1;
        sum -= arr[l];
        l++;
        len--;
    }

    ll k = 0;
    for(int i=0;i<(int)n;i++) {
        if (!valid[i + 1]) k++;
        else break;
    }

    if (k == 0)
        cout << -1 << endl;
    else
        cout << k << endl;

    return 0;
}
