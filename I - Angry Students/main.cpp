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
        int n;cin>>n;
        vector<char>v(n);
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
        }
        int mx=0;
        for (int i = 0; i <n ; ++i) {
        if(v[i]=='A'){
            int l=i+1;
            int count = 0;
            while(v[l]!='A'&&l<n){
                count++;
                l++;
            }
            mx=max(count,mx);
        }
        }
        cout<<mx<<endl;
    }
}