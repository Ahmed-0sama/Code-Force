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
        vector<int>arr(n-1);
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        vector<int>out(n);
        mt19937 gen(rand());
        uniform_int_distribution<int> distribution(1, 1000000000);
        out[0]=distribution(gen);
        for(int i=1;i<n;i++){
            out[i]=out[i-1]+arr[i-1];
        }
        for (int i = 0; i <n ; ++i) {
            cout<<out[i]<<" ";
        }
        cout<<endl;
    }

}