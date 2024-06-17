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
        int pos, n;
        cin >> pos >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int count=0;
        int cat_pos=0;
        sort(a.begin(), a.end(), greater<int>());

        for (int i = 0; i <n ; ++i) {
            cat_pos+=pos-a[i];
            if(cat_pos<pos){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
}