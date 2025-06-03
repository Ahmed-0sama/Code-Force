#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v;
        for (int i = 0; i <n ; ++i) {
            int x;
            cin>>x;
            if (v.empty() || v.back() != x) v.push_back(x);
        }
        int cnt=2;
        if(v.size()==1ll){
            cout<<"1"<<endl;
            continue;
        }
        for (int i = 1; i <v.size()-1 ; ++i) {
            if((v[i]>v[i-1]&&v[i]>v[i+1])||(v[i]<v[i+1]&&v[i]<v[i-1]))cnt++;
        }
        cout<<cnt<<endl;
    }
}