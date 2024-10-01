#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main (){
    fastread();
    string name;
    cin>>name;
    string date;
    cin>>date;
    int n=name.length();
    vector<char>v(n);
    bool flag=false;
    int l=0;
    int r=n-1;
    for (int i = 0; i <n ; ++i) {
     if(!flag){
         v[l]=name[i];
         flag=true;
         l++;
     }
     else{
         v[r]=name[i];
         flag=false;
         r--;
     }
    }
    for (char c:v) {
        cout<<c;
    }
    cout<<endl;
    map<char,int>m;
    int index=0;
    for (char i = 'A'; i <= 'J'; ++i) {
        m[i]=index;
        index++;
    }
    int uWu=date.length();
    vector<int>vv(uWu);
    for (int i = 0; i <uWu ; ++i) {
        if(date[i]=='/'){
            vv[i]='/';
        }
        else{
            vv[i]=m[date[i]];
        }
    }
    for (int c:vv) {
        if(c=='/'){
            cout<< (char)c;
        }
        else{
        cout<<c;
        }
    }

}