#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
//const int N=1e4;
//int MOD=1e9+7;
//int dp[N][N];
//int n,weight;
//vector<vector<int>>v(n);
int lowest_Common_Divisor(int n) {
    if (n % 2 == 0) return 2;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return i;
    }
    return n;
}
vector<int> mergesort(vector<int>& v, long &swapCount) { // Pass swapCount by reference
    if (v.size() <= 1) return v;

    int mid = (v.size()) / 2;
    vector<int> left(v.begin(), v.begin() + mid);
    vector<int> right(v.begin() + mid, v.end());

    left = mergesort(left, swapCount);
    right = mergesort(right, swapCount);

    vector<int> res;
    int l = 0, r = 0;

    while (l < left.size() || r < right.size()) {
        if (l < left.size() && r < right.size()) {
            if (left[l] > right[r]) {
                swapCount += left.size() - l;
                res.push_back(right[r]);
                r++;
            } else {
                res.push_back(left[l]);
                l++;
            }
        }
        else if (l < left.size()) {
            res.push_back(left[l]);
            l++;
        }
        else {
            res.push_back(right[r]);
            r++;
        }
    }
    return res;
}

long count(vector<int>& v) {
    long swapCount = 0;
    mergesort(v, swapCount); // Pass swapCount by reference
    return swapCount;
}

signed main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
        }
        cout<<count(v)<<endl;
    }
}