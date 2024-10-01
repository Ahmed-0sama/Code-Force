#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main (){
    fastread();
    int n;
    cin>>n;
    vector<int> a(n);
    int r1=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        r1=max(r1,a[i]);
    }
    int m;
    int p1=INT_MIN;
    cin>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
        p1=max(p1,v[i]);
    }
    int k;
    cin>>k;
    vector<int>u(k);
    int p2=INT_MAX;
    for(int i=0;i<k;i++){
        cin>>u[i];
        p2=min(p2,u[i]);
    }
    int Mout,Min;
    cin>>Mout>>Min;
    double r2= sqrt(double(Min*p1*r1*r1)/double((Mout*p2+Min*p1)));
    cout<<fixed<<setprecision(12)<<r2<<endl;

}