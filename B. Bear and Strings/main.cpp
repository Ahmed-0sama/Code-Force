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
    string s;
    cin>>s;
    int count=0;
    for (int i = 0; i <s.length() ; ++i) {
        int t=s.find("bear",i);
        if(t!=string::npos){
            count+=s.length()-t-3;
        }
    }
    cout<<count<<endl;
}