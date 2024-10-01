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
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    vector<int>c;
    vector<int>b;
    for (int i = 0; i <n ; ++i) {
        if(v[i]<0){
            c.push_back(v[i]);
        }
        else{
            b.push_back(v[i]);
        }
    }
    int sumb=0;
    for (int i = 0; i <b.size() ; ++i) {
        sumb+=b[i];
    }
    int sumc=0;
    for (int i = 0; i <c.size() ; ++i) {
        sumc+=c[i];
    }
    cout<<(sumb-sumc)<<endl;
}