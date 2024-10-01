#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
        int t;
        cin >> t;
        deque<int> v;
        priority_queue<int,vector<int>,greater<>>q;
        while (t--) {
            int type;
            cin >> type;
            if (type == 1) {
                int x;
                cin >> x;
                v.push_back(x);
            } else if (type == 2) {
                if(q.size()){
                    cout<<q.top()<<endl;
                    q.pop();
                }
                else{
                    cout<<v.front()<<endl;
                    v.pop_front();
                }
            } else if (type == 3) {
               for(auto it:v){
                   q.push(it);
               }
               v.clear();
            }
        }
        return 0;
    }