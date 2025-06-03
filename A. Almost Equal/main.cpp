#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int n;cin>>n;
    if(n%2!=0){
        cout<<"YES"<<endl;
        for (int i = 1; i <=2*n ; ++i) {
            if(i%2!=0){
                cout<<i<<' ';
            }
            else{
                int ans=(((i / 2 + n / 2) % n + 1) * 2);
                cout<<ans<<' ';
            }
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}