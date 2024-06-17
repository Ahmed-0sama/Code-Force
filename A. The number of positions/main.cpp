#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
signed main() {
    int n,a,b;
    cin >> n>>a>>b;
    cout<<min(n-a,b+1)<<endl;
}
