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
    string s;
    cin>>s;
    stack<char>st;
    for (int i = 0; i <s.length() ; ++i) {
        if(!st.empty()&&st.top()==s[i]){
           st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    st.empty()?cout<<"Yes":cout<<"No";

}