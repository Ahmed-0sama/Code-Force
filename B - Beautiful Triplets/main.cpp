#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

//another sol
int effiecient(vector<int>&v,int d){
    unordered_set<int>s;
    for (int i = 0; i <v.size() ; ++i) {
        s.insert(v[i]);
    }
    int ans=0;
    for (int i = 0; i <v.size() ; ++i) {
        if(s.count(v[i]+d)&&s.count(v[i]+2*d)){
            ans++;
        }
    }
    return  ans;
}

signed main(){
    fastread();
    int n,d;cin>>n>>d;
    vector<int> v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    //bruteforce solution 
//    int count=0;
//    for (int i = 0; i < n ; ++i) {
//        for (int j = i+1; j <n ; ++j) {
//            if(v[j]-v[i]==d){
//                for (int k = j+1; k <n ; ++k) {
//                    if(v[k]-v[j]==d){
//                        count++;
//                        break;
//                    }
//                }
//            }
//        }
//    }
    int count= effiecient(v,d);
    cout<<count<<endl;
}