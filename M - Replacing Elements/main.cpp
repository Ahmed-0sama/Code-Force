#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector<int>v(n);
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
        }
        bool flag =true;
        for (int i = 0; i <n ; ++i) {
            if(v[i]>d){
                flag= false;
            }
        }
        if(!flag){
        sort(v.begin(),v.end());
            for (int i = 0; i <n-1 ; ++i) {
               if(v[i]+v[i+1]<=d){
                    flag=true;
                   break;
               }
            }
        }
        flag?cout<<"Yes"<<endl:cout<<"No"<<endl;


    }
}