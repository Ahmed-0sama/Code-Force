#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    int q;
    cin>>q;
    sort(v.begin(),v.end());
    while(q--){
        int x;
        cin>>x;
        int c=-1;
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]<=x){
                c=max(c,mid);
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        c++;
        cout<<c<<endl;
    }
}