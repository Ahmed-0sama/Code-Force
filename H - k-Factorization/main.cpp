#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int N=1e6;
bool prime[N];
vector<int>v;

signed main(){
    fastread();
    int n,k;cin>>n>>k;
    vector<int>v;
    for (int i =2; i*i<=n&&n!=1 ; ++i) {
            while(n%i==0&&k!=1){
                n/=i;
                k--;
                v.push_back(i);
            }

    }
    if(k!=1||n==1)cout<<"-1"<<endl;
    else {
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << " ";
        }
        cout<<n;
    }
}