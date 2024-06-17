#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <climits>
#include <algorithm>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL))

signed main(){
    fastread();
    int l,r,m;
    cin>>l>>r>>m;
    int prod=1;
    for (int i = l; i <=r ; ++i) {
        prod*=i;
        prod%=m;

    }
    cout<<prod<<endl;


}