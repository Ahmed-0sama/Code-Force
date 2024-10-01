#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <iomanip>
#include <set>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
signed main(){
    fastread();
    int n,m;
    cin >> n>>m;
    map<int ,int>mp;
    for (int i = 0; i <m ; ++i) {
        int a,b,c;
        cin >> a>>b>>c;
        mp[b]+=c;
        mp[a]-=c;
    }
    int ans=0;
    for(auto i:mp){
        if(i.second<0){
            ans+=i.second;
        }
    }
    cout<<abs(ans);
}