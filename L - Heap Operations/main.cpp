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
    int n;cin>>n;
    priority_queue<int, vector<int>, greater<>> s;
    vector<string>op;
    for (int i = 0; i <n ; ++i) {
        string q;cin>>q;
        if(q=="insert"){
            int x;cin>>x;
            s.push(x);
            op.push_back("insert "+to_string(x));
        }
        else if(q=="removeMin"){
            if (!s.empty()) {
                s.pop();
                op.push_back("removeMin");
            } else {
                op.push_back("insert 0");
                op.push_back("removeMin");
            }
        }
        else if(q=="getMin") {
            int x;
            cin >> x;
            while (!s.empty() && s.top() < x) {
                op.push_back("removeMin");
                s.pop();
            }
            if (s.empty() || s.top() > x) {
                s.push(x);
                op.push_back("insert " + to_string(x));
            }
            op.push_back("getMin " + to_string(x));
        }
        }
    cout<<op.size()<<endl;
    for (const auto &i : op) {
        cout << i << endl;
    }
}