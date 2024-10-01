#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string b;cin>>b;
        string ans="1";
        for (int i = 1; i <n ; ++i) {
            if('1'+b[i]!=ans[i-1]+b[i-1]){
                ans+="1";
            }
            else{
                ans+="0";
            }
        }
        cout<<ans<<endl;
    }

}