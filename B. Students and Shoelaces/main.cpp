#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <iomanip>
#include <set>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

signed main() {
    fastread();
    int n,m;
    cin >> n >> m;
    vector<set<int>> mark(n+1);
    while(m--){
        int a,b;
        cin >> a >> b;
        mark[a].insert(b);
       mark[b].insert(a);

    }
    int groups=0;
    while(true){
        vector<int> v;
        for (int i = 0; i <=n ; ++i) {
            if(mark[i].size()==1){
                v.push_back(i);
            }
        }
        for (int i = 0; i <v.size() ; ++i) {
            set<int>::iterator it=mark[v[i]].begin();
            mark[v[i]].clear();
            mark[*it].erase(v[i]);
        }
        if(v.size()){
            groups++;
        } else{
            break;
        }
    }
    cout << groups<<endl;
}