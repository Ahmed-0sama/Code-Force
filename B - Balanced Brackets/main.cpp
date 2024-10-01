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
    int t;
    cin>>t;
    while(t--){
        stack<char>s;
        string x;
        cin>>x;
        bool flag=true;
        for (int i = 0; i <x.length() ; ++i) {
            if(x[i]=='['||x[i]=='{'||x[i]=='('){
                s.push(x[i]);
            }
            else{
                if(s.empty()||(x[i]==')'&&s.top()!='(')||(x[i]=='}'&&s.top()!='{')||(x[i]==']'&&s.top()!='[')){
                    flag= false;
                    break;
                }
                else{
                   s.pop();
                }
            }
        }
        if(!s.empty()){
            flag = false;
        }
        flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}