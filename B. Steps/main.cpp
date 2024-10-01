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
    int n,m;
    cin >> n >> m;
    int xc,yc;
    cin >> xc >> yc;
    int k;
    cin >> k;
    int ans = 0;
    for (int i = 0; i <k ; ++i) {
        int dx,dy;
        cin >> dx >> dy;
        int t = INT_MAX;
        if(dx > 0){
            t = min(t,(n-xc)/dx);
        }else if(dx < 0){
            t = min(t,(1-xc)/dx);
        }
        if(dy > 0){
            t = min(t,(m-yc)/dy);
        }else if(dy < 0){
            t = min(t,(1-yc)/dy);
        }
        ans += t;
        xc += t*dx;
        yc += t*dy;
    }
    cout << ans << endl;
}