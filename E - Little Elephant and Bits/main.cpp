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
    string s;cin>>s;
    bool found=false;
    for (int i = 0; i <s.length() ; ++i) {
        if(s[i]=='0'){
            s.erase(i,1);
            found=true;
            break;
        }
    }
    if(!found){
        s.erase(s.length()-1,1);
    }
    cout<<s<<endl;
}