#include <iostream>
#include <vector>
#include <climits>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main() {
    fastread();
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int start = 0, end = 0, ans = INT_MAX;
    int sum=0;
    while(end<n){
        sum+=v[end];
        if(sum>=m){
            while(sum-v[end]>=m){
                sum-=v[start];
                start++;
            }
            ans=min(ans,end-start+1);
        }
        end++;
    }
   ans==INT_MAX?cout<<"-1":cout<<ans<<endl;
}
