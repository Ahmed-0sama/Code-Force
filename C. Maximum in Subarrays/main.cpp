#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#define endl '\n'
typedef long long  ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();
    int n;
    cin>> n;
    vector<int>v(n+1);
    vector<pair<int, int>>p(n+1);
    for (int i = 1;i <= n;i++){
        cin >> v[i];
    }
    stack<int>st;
    v[0]=(1e8);
    st.push(0);
    for (int i = 1;i<= n;i++)
    {
        while (v[i] >= v[st.top()])st.pop();
        p[i].first = st.top();
        st.push(i);
    }
    stack<int>st2;
    v.push_back(1e8);
    st2.push(n+1);
    for (int i = n;i >0;i--)
    {
        while (v[i] >= v[st2.top()])st2.pop();
        p[i].second= st2.top();
        st2.push(i);
    }
    ll cnt = 0;
    for (int i = 1;i <= n;i++)
    {
        cnt += ll(i - p[i].first) * (p[i].second - i) * v[i];
    }
    cout << cnt;
}
