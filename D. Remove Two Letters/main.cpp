#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int cnt=0;
        for (int i = 0; i <n-2 ; ++i) {
            if(s[i]==s[i+2])cnt++;
        }
        cout<<n-cnt-1<<endl;
    }

}