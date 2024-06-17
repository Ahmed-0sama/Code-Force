#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
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
        int n;
        cin>>n;
        vector<int> arr(n);
        int min = INT_MAX;
        for (int i = 0; i <n ; ++i) {
            int x;
            cin>>x;
            arr[i] = x;
            if(x<min){
                min = x;
            }
        }
        int ans = 0;
        for (int j = 0; j <n ; ++j) {
           ans+=arr[j]-min;
        }
        cout<<ans<<endl;
    }
}