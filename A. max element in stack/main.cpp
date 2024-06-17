#include <iostream>
#include <stack>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();
    int t;
    cin>>t;
    stack<ll>s ;
    while (t--) {
        int x;
        cin >> x;
        if (x == 2) {
            s.pop();
        }
        else {
            ll n;
            cin >> n;
            if (!s.empty()) {
                s.push(max(n, s.top()));
            } else {
                s.push(n);
            }
            cout << s.top() << endl;
        }
        return 0;

    }
}