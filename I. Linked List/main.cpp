#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main() {
    int n,q;
    cin>>n>>q;
    deque<string>d;
    while(n--){
        string x;
        cin>>x;
        d.push_back(x);
    }
    while(q--){
        int numb;
        cin>>numb;
        if(numb==1){
            string val;
            cin>>val;
           auto it = find(d.begin(),d.end(),val);
          if(it!=d.end()){
              d.erase(it);
          }
          else{
              cout<<"Not found"<<endl;
          }
        }
        else if(numb==2){
            if(d.size()==0){
            cout<<"0"<<endl;
            }
            else{
            for(auto it:d){
                cout<<it<<" ";
            }
            cout<<endl;
            }
        }
        else if(numb==3){
            if(d.size()==0){
                cout<<"0"<<endl;
            }
            else{
            auto it=--d.end();
            for(;it>=d.begin();it--){
                cout<<*it<<" ";
            }
            cout<<endl;
        }
        }

    }
    return 0;
}
