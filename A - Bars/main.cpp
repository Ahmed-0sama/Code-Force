#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

bool can_reach(int hope,vector<int>&v,int n,int temp){
    if(n==0)return temp==hope;
    if(temp==hope) return true;
    if(temp>hope) return false;
    if(can_reach(hope,v,n-1,temp+v[n-1]))return true;
    if(can_reach(hope,v,n-1,temp))return true;
    return false;
}
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int hope;cin>>hope;
        int n;cin>>n;
        vector<int>v(n);
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
        }
        can_reach(hope,v,n,0ll)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}