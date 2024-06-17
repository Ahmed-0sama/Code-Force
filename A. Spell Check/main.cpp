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
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<n;i++) {
            m[s[i]]++;
        }
        bool flag = false;
        if(m['T']==1&&m['i']==1&&m['m']==1&&m['u']==1&&m['r']==1&&n==5) {
            flag = true;
        }
        flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}