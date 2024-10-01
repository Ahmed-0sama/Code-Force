#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

signed main(){
    fastread();
    int x;cin>>x;
    int count=0;
   while(x>0){
       if(x&1)count++;
       x/=2;
   }
   cout<<count<<endl;
}