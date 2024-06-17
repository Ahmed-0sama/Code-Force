#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main(){
    fastread();
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool flag1= false;
        bool flag2=false;
        int max1=max(a, b);
        int min1=min(a, b);

        for(int i=min1; i<=max1; i++)
        {
            if(c==i)
            {flag1=true;
            }
            if(d==i)
            {flag2=true;
            }
        }
        if((flag1 && flag2)||(!flag1 && !flag2))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}