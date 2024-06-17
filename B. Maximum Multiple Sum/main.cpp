#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int find_optimal_x(int n) {
    int max_sum = 0;
    int optimal_x = 2;
    for (int x = 2; x <= n; ++x) {
        int k = n / x;
        int current_sum = x * k * (k + 1) / 2;
        if (current_sum > max_sum) {
            max_sum = current_sum;
            optimal_x = x;
        }
    }
    return optimal_x;
}
signed main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<find_optimal_x(n)<<endl;

    }
}