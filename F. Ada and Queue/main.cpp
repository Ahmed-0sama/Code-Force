#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    deque<int>d;
    while(t--){
       string x;
         cin>>x;
         if(x=="front"){
             if(!d.empty()) {
                 cout << d.front() << endl;
                 d.pop_front();
             }
             else{
                 cout<<"No job for Ada?"<<endl;
             }
         }
         else if(x=="back"){
             if(!d.empty()){
             cout<<d.back()<<endl;
                d.pop_back();
         }else{
                 cout<<"No job for Ada?"<<endl;
             }
         }

         else if(x=="reverse"){
             reverse(d.begin(),d.end());
         }
         else if(x=="push_back"){
             int y;
             cin>>y;
             d.push_back(y);
         }
         else if(x=="toFront"){
             int y;
             cin>>y;
             d.push_front(y);
         }
    }

    return 0;
}
