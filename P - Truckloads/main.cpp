#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

int dividess(int n, int x) {
    int ans = 0;
    queue<int> q;
    q.push(n);
    while (!q.empty()) {
        int reminder = q.front();
        q.pop();
        if (reminder <= x) {
            ans++;
        } else {
            int half = reminder / 2;
            int half2 = reminder - half;
            q.push(half);
            q.push(half2);
        }
    }
    return ans;
}

signed main() {
    fastread();
    int n,x;
    while(cin>>n>>x){
        cout<<dividess(n,x)<<endl;
    }

    return 0;
}
