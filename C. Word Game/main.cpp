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
    vector<string> a(n);
    vector<string> b(n);
    vector<string> c(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    for(int i=0;i<n;i++) {
        cin>>c[i];
    }
    map<string, int>m;
    for(int i=0;i<n;i++) {
        m[a[i]]++;
        m[b[i]]++;
        m[c[i]]++;
    }
    int first=0;
    int second=0;
    int third=0;
    for (int i = 0; i <n ; ++i) {
            if(m[a[i]]==1) {
                first+=3;

            }
            else if(m[a[i]]==2) {
                first++;
            }
            else{
                continue;
            }
        }
    for (int i = 0; i <n ; ++i) {
        if(m[b[i]]==1) {
            second+=3;

        }
        else if(m[b[i]]==2) {
            second++;
        }
        else{
            continue;
        }
    }
    for (int i = 0; i <n ; ++i) {
    if(m[c[i]]==1) {
    third+=3;
        }
    else if(m[c[i]]==2) {
    third++;
    }
    else{
    continue;
    }
    }
    cout<<first<<" "<<second<<" "<<third<<endl;
    }
}