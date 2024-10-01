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
    int n;
    cin>>n;
    int sum=0;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    for (int i = 0; i <(1<<n) ; ++i) {
        int c=0;
        for (int j = 0; j <n ; ++j) {
            if(i&1<<j){
                c+=v[j];
            }
            else{
                c-=v[j];
            }
        }
        if(c%360==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;


}