#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int new_height=a*d;
    int new_width=b*c;
    int divistor=__gcd(new_height,new_width);
    int maxx=max(new_height,new_width);
    cout<<abs(new_height-new_width)/divistor<< "/"<< (maxx/divistor)<<endl;
}