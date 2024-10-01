#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int fast_pow(int base, int power) {
    if (power == 0) return 1;

    int res = fast_pow(base, power / 2);
    res *= res;

    if (power % 2 != 0) {
        res *= base;  // Multiply by base if the power is odd
    }

    return res%100;
}

signed main(){
    int n;cin>>n;
    cout<<25;
}