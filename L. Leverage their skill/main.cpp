#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>q;
        vector<int> results(q);
        for (int i = 0; i < q; ++i) {
            int n;
            cin>>n;
            results[i] = n / 2;
        }
        for (const auto& result : results) {
            cout << result << "\n";
        }

    }
}