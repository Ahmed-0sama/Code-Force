
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int n;
int solve(int lucky=0,int index=0){
    if(lucky>n){
        return -1;
    }
    else if(lucky==n){
        return index;
    }
    else{
        return max(solve(lucky*10+4,index*2+1) ,
        solve(lucky*10+7,index*2+2));
    }
};
signed main() {
    fastread();
    cin>>n;
    int ans = solve();
    cout<<ans<<endl;

}