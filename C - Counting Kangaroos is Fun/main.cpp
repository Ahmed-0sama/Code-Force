#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <deque>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main() {
    fastread();
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i=0;
    int j=n/2;
    int visable=n;
    while(i<n/2&&j<n){
        if(v[i]*2<=v[j]){
            visable--;
            i++;
        }
        j++;
    }
    cout<<visable<<endl;
}