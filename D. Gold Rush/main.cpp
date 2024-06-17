#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
bool test(int n, int m) {
    if (n == m) {
        return true;
    }
    if (n % 3 != 0) {
        return false;
    }
    else {
        return test(n / 3 * 2, m) || test(n / 3, m);
    }
}
signed  main(){
    fastread();
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        cout<<(test(n,m) ? "YES" : "NO" )<<endl;
    }
}
