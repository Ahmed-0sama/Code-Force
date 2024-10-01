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
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    int cost=0;
    int val=1,temp=k;
    for (int i = 0; i <n ; ++i) {
        cost+=(val*v[i]);
        temp--;
        if(temp==0){
            val++;
            temp=k;
        }
    }
    cout<<cost<<endl;

}