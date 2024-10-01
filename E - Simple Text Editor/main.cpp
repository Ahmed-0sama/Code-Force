#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>
#include <deque>
#include <stack>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    vector<char>v;
    stack<pair<int,string>>s;
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            string g;
            cin>>g;
            for (int i = 0; i <g.length() ; ++i) {
                v.push_back(g[i]);
            }
            s.push({x,g});
        }
        else if(x==2){
            int g;
            cin>>g;
            string neww;
            for (int i = 0; i < g; ++i) {
                neww.push_back(v[v.size() - g + i]);
            }
            for (int i = 0; i < g; ++i) {
                v.pop_back();
            }
            s.push({x, neww});
        }
        else if(x==3){
            int g;
            cin>>g;
            cout<<v[g - 1] <<endl;
        }
        else{
            pair<int,string>me;
            me=s.top();
            s.pop();
            if(me.first==1){
                for (int i = 0; i <me.second.size() ; ++i) {
                    v.pop_back();
                }
            }
            else if(me.first == 2){
                for (int i = 0; i <me.second.size() ; ++i) {
                    v.push_back(me.second[i]);
                }
            }
        }
        }
    }