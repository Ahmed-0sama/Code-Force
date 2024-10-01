#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int n;cin>>n;
    vector<int>prefix(n,0);
    vector<int>sorted(n,0);
    vector<int>sortedpref(n,0);
    for (int i = 0; i <n ; ++i) {
        cin>>sorted[i];
    }
    prefix[0]=sorted[0];
    for (int i = 1; i <n ; ++i) {
        prefix[i]=prefix[i-1]+sorted[i];
    }

    sort(sorted.begin(),sorted.end());
    sortedpref[0]=sorted[0];
    for (int i = 1; i <n ; ++i) {
        sortedpref[i]=sortedpref[i-1]+sorted[i];
    }
    int q;cin>>q;
    while(q--){
        int type, l, r;
        cin >> type >> l >>r;
        --l; --r;
        if (type == 1) {
            if (l == 0) {
                cout << prefix[r] << endl;
            } else {
                cout << prefix[r] - prefix[l - 1] << endl;
            }
        } else {
            if (l == 0) {
                cout << sortedpref[r] << endl;
            } else {
                cout << sortedpref[r] - sortedpref[l - 1] << endl;
            }
        }
    }
}