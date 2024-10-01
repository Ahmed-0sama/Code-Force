#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
  int n;cin>>n;
  int l=-2e9,r=2e9;
      while (n--) {
          string sign;
          cin >> sign;
          int num;
          cin >> num;
          char boo;
          cin >> boo;
          if (boo == 'Y') {
              if (sign == ">") {
                  l=max(num,l);
              }
              else if(sign==">="){
                  l=max(num-1,l);
              }
              else if(sign=="<"){
                  r=min(num,r);
              }
              else if(sign=="<="){
                  r=min(num+1,r);
              }
      }
          else{
              if(sign=="<"){
                  l=max(num-1,l);
              }
              else if(sign=="<="){
                  l=max(num,l);
              }
              else if(sign==">"){
                  r=min(r,num+1);
              }
              else{
                  r=min(r,num);
              }
          }
  }
      if(l+1>=r){
          cout<<"Impossible";
      }
      else{
          cout<<(l+r)/2<<endl;
      }
}