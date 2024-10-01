#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int N=200007;
int arr [N];
int sum[N];
signed main(){
    fastread();
    int n,k,q;
    cin>>n>>k>>q;
    for (int i = 0; i <n ; ++i) {
        int l,r;
        cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
    }
    for (int i = 1; i < N ;++i) {
        arr[i]+=arr[i-1];
        sum[i]+=sum[i-1]+(arr[i]>=k);
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<sum[r]-sum[--l]<<endl;
    }


}