#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));


signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum=0;
        int maax=INT_MIN;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            maax=max(maax,a[i]);
            if(sum-maax==maax){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
