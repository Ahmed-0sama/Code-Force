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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i <= 9; ++i) {
            int num = i;
            while (num <= n) {
                ++count;
                num = num * 10 + i;
            }
        }
        cout << count << endl;
    }

}