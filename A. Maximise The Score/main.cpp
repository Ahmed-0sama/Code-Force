#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll ans=0;
        cin>>n;
        ll a[n*2];
        for(ll i=0;i<2*n;++i)
            cin>>a[i];
        sort(a,a+2*n);
        for(ll i=0;i<2*n;i+=2)
            ans+=a[i];
        cout<<ans<<"\n";
    }
}