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
    int n,m;
    cin>>n>>m;
    if(n>=m) {
        cout << n - m << endl;
        return 0;
    }
    int c=0;
    while(m>n){
        if(m%2){
            m++;
            c++;
        }
        m/=2;
        c++;
    }
    c+=n-m;
    cout<<c<<endl;

}