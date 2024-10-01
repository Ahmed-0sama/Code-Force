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
        int c1,c2,c3;cin>>c1>>c2>>c3;
        int a1,a2,a3,a4,a5;cin>>a1>>a2>>a3>>a4>>a5;
        if(c1<a1||c2<a2||c3<a3){
            cout<<"NO"<<endl;
            continue;
        }
        c1-=a1,c2-=a2,c3-=a3;
        if (c1 + c3 >= a4) {

            int mn = min(c1, a4);
            c1 -= mn;
            a4 -= mn;
            c3 -= a4;
        } else {
            cout << "NO" << endl;
            continue;
        }
        if (c2 + c3 >= a5) {
            int mn = min(c2, a5);
            c2 -= mn;
            a5 -= mn;
            c3 -= a5;
        } else {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}