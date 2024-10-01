#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
bool can(vector<int>&v,int n,int k,int target){
    int need=0;
    for (int i = n/2; i <n ; ++i) {
        if(v[i]<target){
            need+=target-v[i];
        }
        if(need>k)return false;
    }
    return need<=k;
}
signed main(){
    fastread();
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int l=v[n/2];int r=l+k+1;
    while(l<r){
        int mid=(l+r+1)/2;
        if(can(v,n,k,mid)){
            l=mid;
        }
        else{
            r=mid-1;
        }
    }
    cout<<l<<endl;
}