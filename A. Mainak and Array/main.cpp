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
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int> arr(n);
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int maxx=arr[n-1]-arr[0];
        for (int i = 0; i <n-1 ; ++i) {
            maxx=max(maxx,arr[i]-arr[0]);
        }
     for(int i=0;i<n-1;i++){
          maxx=max(arr[n-1]-arr[i],maxx);
     }
        for (int i = 0; i <n-1 ; ++i) {
            maxx=max(maxx,arr[i]-arr[i+1]);
        }
        cout<<maxx<<endl;
    }

}
