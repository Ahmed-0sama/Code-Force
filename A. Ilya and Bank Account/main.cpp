#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int n;
    cin >> n;
    if(n>=0){
        cout<<n;
    }else {
        int d1 = n / 10;
        int d2 = (n / 100) * 10 + (n % 10);
        cout << max(d1, d2);
    }
}