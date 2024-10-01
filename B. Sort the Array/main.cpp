#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>b(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
        b[i]=v[i];
    }
    sort(b.begin(),b.end());
    int l=-1,r=-1;
    for (int i = 0; i <n ; ++i) {
        if(v[i]!=b[i]){
            l=i;
            break;
        }
    }
    for (int i = n-1; i >=0 ; --i) {
        if(v[i]!=b[i]){
            r=i;
            break;
        }
    }
    if(l==-1){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else{
        reverse(v.begin()+l,v.begin()+r+1);
        bool flag=true;
        for (int i = 0; i <n ; ++i) {
            if(v[i]!=b[i]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"yes"<<endl;
            cout<<l+1<<" "<<r+1<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}