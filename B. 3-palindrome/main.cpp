#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int n;
    cin >> n;
    string s="";
    for (int i = 0; i <n ; ++i) {
        s+="aabb";
    }
    for (int i = 0; i < n; ++i) {
        cout << s[i];
    }
}