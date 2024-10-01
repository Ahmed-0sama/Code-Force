#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1e6+1;
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        int mx=1;
        int mxind=0;
        for (int i = 0; i <n ; ++i) {
            cin>>v[i];
            if(v[i]>=mx){
                mx=v[i];
                mxind=i;
            }
        }
        vector<bool>taken(n);
        vector<int>ans;
        int gc=0;
        ans.push_back(mx);
        taken[mxind]=true;
        gc=mx;
        for (int i = 0; i <n-1 ; ++i) {
            int localmx=0;
            int localmxindex=0;
            for (int j = 0; j <n ; ++j) {
              if(!taken[j]&&gcd(v[j],gc)>localmx){
                  localmx=gcd(v[j],gc);
                  localmxindex=j;
              }
            }
            ans.push_back(v[localmxindex]);
            taken[localmxindex]=true;
            gc=localmx;
        }
        for(auto c:ans){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}