#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        if(t=="a"){
            cout<<1<<endl;
        }
        else if (t.find('a') != std::string::npos) {
            cout << -1 << endl;
        }
        else{
            int n=1LL<<s.length();
            cout<<n<<endl;
        }
    }
}