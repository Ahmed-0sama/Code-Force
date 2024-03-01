#include <bits/stdc++.h>
using namespace std;
void speed()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    speed();
    int t;
    cin >> t;
    while(t--){
            int n;
            cin>>n;
            deque<int>ss;
            for(int i=n ; i>=1 ; i--)
            {
                ss.push_front(i);
                ss.push_front(ss.back());
                ss.pop_back();
            }
            for(int i=1 ; i<=n ; i++){
                cout<<ss[i];
                if(i!=n)cout<<" ";
            }
            cout<<endl;
    }
    return 0;
}