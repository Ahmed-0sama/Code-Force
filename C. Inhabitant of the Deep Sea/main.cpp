#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<ll> v(n + 1);
        for (int i = 1; i <=n ; ++i) {
            cin>>v[i];
        }
        int l = (k + 1) / 2, r = k - l;
        ll count=0;
        for (int i = 1; i <=k ; ++i) {
            if(v[l]==0){
                l++;
            }
            if(v[r]==0){
                r--;
            }
            if(l>r){
                break;
            }
            if(i%2==1){
                v[l]--;
                if(v[l]==0){
                    l++;
                    count++;
                }
            } else{
                v[r]--;
                if(v[r]==0){
                    r--;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
