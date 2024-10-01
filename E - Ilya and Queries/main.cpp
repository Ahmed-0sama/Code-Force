#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    string s;cin>>s;
    vector<int>prefix(s.length()+1,0);
    for (int i = 1; i <s.length() ; ++i) {
        prefix[i]=prefix[i-1];
        if(s[i]==s[i-1])
            prefix[i]++;
    }

    int q;cin>>q;
        while(q--){
            int l,r;cin>>l>>r;
            l--;r--;
            cout<<prefix[r]-prefix[l]<<endl;
        }
    }

/*
......


 */