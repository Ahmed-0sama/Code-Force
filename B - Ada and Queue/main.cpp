#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>
#include <deque>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int q;
    cin>>q;
    deque<int>d;
    bool flag_reversed=false;
    while(q--){
        string s;cin>>s;
        if(s=="toFront"){
            int x;cin>>x;
            if(flag_reversed){
                d.push_back(x);
            }
            else{
                d.push_front(x);
            }
        }
        else if(s=="back"){
        if(d.empty()){
            cout<<"No job for Ada?"<<endl;
        }
        else{
            if(flag_reversed){
                cout<<d.front()<<endl;
                d.pop_front();
            }
            else {
                cout<<d.back()<<endl;
                d.pop_back();
            }
        }
        }
        else if(s=="front"){
            if(d.empty()){
                cout<<"No job for Ada?"<<endl;
            }
           else{
               if(flag_reversed){
                   cout<<d.back()<<endl;
                   d.pop_back();
               }
               else{
                   cout<<d.front()<<endl;
                   d.pop_front();
               }
        }
        }
        else if(s=="push_back"){
            int x;cin>>x;
            if(flag_reversed){
                d.push_front(x);
            }
            else{
                d.push_back(x);
            }
        }
        else{
            if(flag_reversed){
                flag_reversed=false;
            }
            else{
                flag_reversed=true;
            }
        }
    }
}