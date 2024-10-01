#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int n,has;cin>>n>>has;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int taken=0;
    int cnt=0;
    for (int i = 0; i <n ; ++i) {
        if(taken+v[i]<=has){
            taken+=v[i];
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt<<endl;
}