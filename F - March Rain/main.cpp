#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
bool check(int n,int k,vector<int>&v,int mid){
    int count=1;
    int lastpos=v[0];
    for (int i = 1; i <n ; ++i) {
        if(v[i]-lastpos>mid){
            count++;
            lastpos=v[i];
        }
        if (count > k) {
            return false;
        }
    }
    return count<=k;
}
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
    int n,k;cin>>n>>k;
    vector<int>v(n);
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
        }
        int l=0,r = v[n - 1] - v[0];
        int ans=r;
        while(l<=r){
            int mid=(l+r)/2;
            if(check(n,k,v,mid)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<++ans<<endl;
    }
}