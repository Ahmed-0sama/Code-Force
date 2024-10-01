#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int t;cin>>t;
   while(t--){
       int n;cin>>n;
       int original_n = n;
       int mx = 0;
       int pr=0;
       for (int i = 2; i*i<=n ; ++i) {
           int cnt=0;
           while(n%i==0){
            cnt++;
            n/=i;
           }
           if(cnt>mx){
               mx=cnt;
               pr=i;
           }
       }
       if (n > 1 && mx==0) {
           mx = 1;
           pr = n;
       }
       cout<<mx<<endl;
       for (int i = 0; i <mx-1 ; ++i) {
           cout<<pr<<' ';
       }
       int last = original_n;
       for (int i = 0; i < mx - 1; ++i) {
           last /= pr;
       }
       cout << last << endl;
   }
}