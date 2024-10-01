#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int n;
    cin>>n;
    vector<int>v(n);
    int sum=0;
    for (int i = 0; i <n ; ++i) {
       cin>>v[i];
       sum^=v[i];
    }
    for (int i = 0; i <n ; ++i) {
        cout<<(sum^v[i])<<" ";
    }

}