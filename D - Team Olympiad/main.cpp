#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>
#include <deque>
#include <queue>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
struct team{
    int programmer;
    int mathematicon;
    int pee;
};
signed main() {
    fastread();
    int n;
    cin>>n;
    queue<int>programming;
    queue<int>math;
    queue<int>pe;
    for (int i = 1; i <=n ; ++i) {
        int x;cin>>x;
        if(x==1){
            programming.push(i);
        }
        else if(x==2){
            math.push(i);
        }
        else{
            pe.push(i);
        }
    }
    vector<team> v;
    while(!programming.empty()&&!math.empty()&&!pe.empty()){
        v.push_back({programming.front(),math.front(),pe.front()});
        programming.pop();
        math.pop();
        pe.pop();
    }
    cout<<v.size()<<endl;
    for (team c:v) {
        cout<<c.programmer<<" "<<c.mathematicon<<" "<<c.pee<<endl;
    }
}