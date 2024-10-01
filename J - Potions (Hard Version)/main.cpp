#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<>>d;
    int sum=0;
    int count=0;
    for (int i = 0; i <n ; ++i) {
        int x;cin>>x;
        sum+=x;
        count++;
        d.push(x);
        if(sum<0){
            sum-=d.top();
            d.pop();
            count--;
        }
    }
    cout<<count<<endl;
}
//12
//-3 -3 -7 -7 -1 -7 3 3 -2 -1 0 -7
// 5
// 4 -4 1 -3 1 -3
// 4  1 -3 1