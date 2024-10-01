#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int>prefixUnsorted(n);
    prefixUnsorted[0] = v[0];
    for(int i = 1; i < n; i++) {
        prefixUnsorted[i] = prefixUnsorted[i - 1] + v[i];
    }
    vector<int>prefixsorted(n);
    sort(v.begin(), v.end());
    prefixsorted[0] = v[0];
    for(int i = 1; i < n; i++) {
        prefixsorted[i] = prefixsorted[i - 1] + v[i];
    }
    int q;
    cin >> q;
    while(q--){
        int type=0;
        int l=0,r=0;
        cin>>type>>l>>r;
        l--;
        r--;
        if(type==1){
            if(l==0){
                cout<<prefixUnsorted[r]<<endl;
            }
            else{
                cout<<prefixUnsorted[r]-prefixUnsorted[l-1]<<endl;
            }
        }
        else{
            if(l==0){
                cout<<prefixsorted[r]<<endl;
            }
            else{
                cout<<prefixsorted[r]-prefixsorted[l-1]<<endl;
            }
        }

    }
}