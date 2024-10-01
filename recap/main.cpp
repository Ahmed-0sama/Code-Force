#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
bool can(vector<int>&v,int n,int req){
    if(req==0)return true;
    for (int mask = 0; mask < (1<<n); ++mask) {
        int sum=0;
        for (int i = 0; i <n ; ++i) {
        if((mask>>i)&1){
            sum+=v[i];
        }
    }
        if(sum==req)return true;
    }
    return false;
}
int count_possible(vector<int>&v,int n,int l,int r,int x){
    int ans=0;
    for (int mask = 0; mask <(1<<n) ; ++mask) {
        int mn=INT_MAX;
        int mx=INT_MIN;
        int sum=0;
        int count=0;
        for (int i = 0; i <n ; ++i) {
            if((mask>>i)&1){
                sum+=v[i];
                count++;
                mn=min(mn,v[i]);
                mx=max(mx,v[i]);
            }
        }
        if(count>=2&&(mx-mn>=x)&&sum>=l&&sum<=r){
            ans++;
        }
    }
    return  ans;
}
signed main(){
    fastread();
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
        }
    cout<<count_possible(v,n,l,r,x)<<endl;

}