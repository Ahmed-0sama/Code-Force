#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int t;
    cin>>t;
    int c=0;
    while (t--){

        int n,m;
        cin>>n>>m;
        if(c+n<=500){
            c+=n;
            cout<<"A";
        }
        else{
            c-=m;
        cout<<"G";
    }
    }
   }