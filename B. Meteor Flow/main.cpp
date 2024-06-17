#include <iostream>
#include <queue>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

int main(){
    fastread();
    ll n;
    cin >> n;
    ll sum = 0;
    ll ans = 0;
    priority_queue<ll>s;
    for (ll i = 0; i < n; ++i) {
        ll a, b;
        cin >> a >> b;
        sum+=b;
        s.push(b);
        if(sum>a){
        sum-=s.top();
        s.pop();
        ans++;
        }

    }

    cout << ans << endl;
    return 0;
}
