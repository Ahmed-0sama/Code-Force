#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            while(v[i]>0 && k!=0){
                v[i]--;
                v[n-1]++;
                k--;
            }
        }
        for (int i = 0; i <n ; ++i) {
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }
}