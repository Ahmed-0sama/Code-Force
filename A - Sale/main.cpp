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
   int n,size;cin>>n>>size;
   vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sum=0;
    for (int i = 0; i <size ; ++i) {
        if(v[i]<0){
            sum+=abs(v[i]);
        }
    }
    cout<<sum<<endl;

}