#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <iomanip>
#include <set>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
signed main(){
    fastread();
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int sum=0;
    for (int i = 0; i < n && k > 0; ++i) {
        if (a[i] < 0) {
            a[i] = -a[i];
            k--;
        }
    }
    if (k % 2 == 1) {
        sort(a.begin(), a.end());
        a[0] = -a[0];
    }
    for (int i = 0; i <n ; ++i) {
        sum+=a[i];
    }
    cout<<sum<<endl;

}