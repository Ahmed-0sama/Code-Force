#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
        fastread();
        int n; cin >> n;
        vector<int> a(21, 0);
        for(int i=0;i<n;i++){
            int x; cin >> x;
            for(int j=0;j<21;j++){
                a[j]+=((x>>j)&1);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int cur=0;
            for(int j=0;j<21;j++){
                if(a[j]){
                    a[j]--;
                    cur+=(1<<j);
                }
            }
            ans+=(cur*cur);
        }
        cout << ans  << endl;
    }