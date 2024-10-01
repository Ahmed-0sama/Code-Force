#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define nmax 100007
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
int n,m=0,i=0,x=0,k=0,y=0,a[nmax],f[nmax],l[nmax],r[nmax],h[nmax],h1[nmax];
signed main(){
    fastread();
    cin>>n>>m>>k;
    for(i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    for(i=1;i<=m;++i)
    {
     cin>>l[i]>>r[i]>>f[i];
    }
    for(i=1;i<=k;++i)
    {
        cin>>x>>y;
        h[x]++;
        h[y+1]--;
    }
    x=0;
    for(i=1;i<=m;++i)
    {
        x+=h[i];
        h1[l[i]]+=x*f[i];
        h1[r[i]+1]-=x*f[i];
    }
    x=0;
    for(i=1;i<=n;++i)
    {
        x+=h1[i];
        cout<<x+a[i]<<" ";
    }
}