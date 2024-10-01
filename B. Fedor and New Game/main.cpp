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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(m+1);
    for (int i = 0; i <m+1 ; ++i) {
        cin>>v[i];
    }
    int count=0;
    for (int i = 0; i <m ; ++i) {
        int x=v[i]^v[m];
        if(__builtin_popcount(x)<=k){
            count++;
        }
    }
    cout<<count<<endl;

}