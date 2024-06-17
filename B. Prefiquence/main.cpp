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
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string sa;
        string sb;
        cin>>sa>>sb;
            int al=0;
            int bl=0;
            int c=0;
            while(al<sa.length()&&bl<sb.length()){
                if(sa[al]==sb[bl]){
                    c++;
                    al++;
                }
                bl++;
            }
    cout<<c<<endl;
    }
}