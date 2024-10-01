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
    int u,v;
    cin>>u>>v;
    if(u%2!=v%2||u>v){
        cout<<"-1"<<endl;
        return 0;
    }
    if(u==0&&v==0){
        cout<<0<<endl;
        return 0;
    }
    if(u==v){
        cout<<1<<endl<<u<<endl;
        return 0;
    }
    int x=(v-u)/2;
    if(u&x){
        cout<<3<<endl<<u<<" "<<x<<" "<<x<<endl;
        return 0;
    }

    cout<<2<<endl<<u+x<<" "<<x<<endl;
}