#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
int brute_force_sol(int l,int r){
    //bruteforce solution
    int mx=0;
    for (int i = l; i <=r ; ++i) {
        for (int j = l; j <=r ; ++j) {
            mx=max(mx,(i^j));
        }
    }
    return mx;
}
signed main(){
    fastread();
    int l,r;
    cin>>l>>r;
    int x=l^r;
    int mx=1;
    while(x){
        x>>=1;
        mx<<=1;
    }
    cout<<mx-1<<endl;
}