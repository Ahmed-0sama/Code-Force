#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    string n;
    cin >> n;
    int zeros=0;
    int ones=0;
    bool flag=false;
    for (int i = 0; i <n.size() ; ++i) {
        if(n[i]=='1'){
            ones++;

            flag=true;
        }
        else if(flag){
            zeros++;
        }
    }
    if(zeros>=6&&ones>0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}