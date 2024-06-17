#include <bits/stdc++.h>
#define ll long long
#define fastread ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

ll getdigit(ll n){
    ll sum=0;
    while(n!=0){
        sum++;
        n/=2;
    }
    return sum;
}


int main()
{
    fastread;
    ll a,b;
    cin>>a>>b;
    ll maxx=max(getdigit(b),getdigit(a));
    ll minn=min(getdigit(b),getdigit(a));
    bitset<64>s(0);
    set<ll>ss;
    ll ans=0;
    for(int i=minn ; i<=maxx ; i++){
        bitset<64>s(0);
        for (int j = 0; j <i ; ++j) {
            s[j]=1;
        }
        for (int j = 0; j <i-1 ; ++j) {
            s[j]=0;
            ll temp=s.to_ullong();
            if(temp<=b && temp>=a&& ss.count(temp)==0){
                ans++;
                ss.insert(temp);
            }
            s[j]=1;
        }

    }
    cout<<ans;
    return 0;
}