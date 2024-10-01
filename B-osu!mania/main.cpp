#include <iostream>
#include <vector>
#include <map>
#include <climits>
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
        vector<int>v(n);
        for (int i = 0; i <n ; ++i) {
            string s;cin>>s;
            for (int j = 0; j <4 ; ++j) {
            if(s[j]=='.')continue;
            else{
                v[i]=j;
                break;
            }
        }
     }
        for (int i = n-1; i >=0 ; i--) {
            cout<<++v[i]<<" ";
        }
        cout<<endl;
    }
}