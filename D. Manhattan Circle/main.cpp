#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        string vew[n];
        for (int i = 0; i < n; i++) {
            cin >> vew[i];
        }
        int minn=INT_MAX;
        int maxx=INT_MIN;
        int mxx=INT_MIN;
        int mnn=INT_MAX;
        for (int i = 0; i <n ; ++i) {
            for (int j = 0; j <m ; ++j) {
                if(vew[i][j]=='#'){
                   if(i>maxx){
                       maxx=i;
                   }
                    if(i<minn){
                        minn=i;
                    }
                    if(j>mxx){
                        mxx=j;
                    }
                    if(j<mnn){
                        mnn=j;
                    }
                }
            }
        }
        int c=(minn+maxx)/2;
        int c2=(mnn+mxx)/2;
        cout<<c+1<<" "<<c2+1<<endl;
        }
    }