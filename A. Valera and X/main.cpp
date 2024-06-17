#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int n;
    cin >> n;
    map<char,int> m1;
    map<char,int> m2;
    string s;
    for (int i = 0; i <n ; ++i) {
        cin>>s;
        for (int j = 0; j <n ; ++j) {
        if(i==j||i+j==n-1){
            m1[s[j]]++;
        }
        else{
            m2[s[j]]++;
        }
        }
    }
    if(m1.size()==1&&m2.size()==1&&m1.begin()->first!=m2.begin()->first){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}