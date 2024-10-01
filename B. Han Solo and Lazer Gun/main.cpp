#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <iomanip>
#include <set>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
signed main(){
    fastread();
    int q,x,y;
    cin>>q>>x>>y;
    set<pair<int, int>> mp;
    while(q--){
        int a,b;
        cin>>a>>b;
        int diffx=a-x;
        int diffy=b-y;
        if(diffx==0){
            mp.insert({1,0});//slope is vertical
        }
        else if(diffy==0){
            mp.insert({0,1});//slope is horizontal
        }
        else{
            int g=__gcd(diffx,diffy);//to normalize the slope
            mp.insert({diffx/g,diffy/g});
        }
    }
    cout<<mp.size()<<endl;

}