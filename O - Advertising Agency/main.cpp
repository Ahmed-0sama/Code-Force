#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1e6+1;
long long const inf=1e18;
int const mod=1e9+7;
vector<int> fact(1e6+3);
int mul(int a,int b)
{
    return (a%mod)*(b%mod)%mod;

}
int fastpowmod(int a,int b,int m)
{
    if(b==0)
        return 1;
    int x=fastpowmod(a,b/2,m);
    if(b%2)
        return mul(mul(x,x),a);
    return mul(x,x);
}

int inv(int a,int m)
{
    return fastpowmod(a,m-2,m);
}
int ncr(int n,int m)
{
    return mul(mul(fact[n],inv(fact[n-m],mod)),inv(fact[m],mod));
}
    signed main() {
        fact[0]=1;
        for(int i=1;i<=1e6;i++)
            fact[i]=mul(fact[i-1],i);
        fastread();
        int t;
        cin >> t;
        while (t--) {
            int a, b;
            cin >> a >> b;
            vector<int> v(a);
            map<int, int> mp;
            for (int i = 0; i < a; ++i) {
                cin >> v[i];
                mp[v[i]]++;
            }
            sort(v.rbegin(), v.rend());
            int last = v[b - 1];
            int c = mp[last];
            int cnt = 0;
            for (int i = 0; i < b; ++i) {
                if (v[i] == last) {
                    cnt++;
                }
            }
            cout << ncr(c, cnt) << endl;
        }
    }