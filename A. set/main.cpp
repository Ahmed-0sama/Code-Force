#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;
    set<int>s;
    while (q--) {
        string x;
        cin >> x;

      if(x=="lower_bound"){
          int y;
          cin>>y;
         auto it=s.lower_bound(y);
         if(it!=s.end()){
             cout<<*it<<endl;
         }
         else{
             cout<<"-1"<<endl;
         }
      }
      else if(x=="upper_bound"){
          int y;
          cin>>y;
          auto it=s.upper_bound(y);
          if(it!=s.end()){
              cout<<*it<<endl;
          }
          else{
              cout<<"-1"<<endl;
          }
      }
      else if(x=="insert"){
        int y;
        cin>>y;
        s.insert(y);
      }
      else if(x=="find"){
          int y;
          cin>>y;
          auto it=s.find(y);
          if(it!=s.end()){
              cout<<"found"<<endl;
          }
          else{
              cout<<"not found"<<endl;
          }
      }
    }
    return 0;
}
