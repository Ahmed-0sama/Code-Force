#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed  main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=false;
        for (int i = 0; i <n-1 ; ++i) {
            string sub= s.substr(i,2);
            int x=s.find(sub);
            int y=s.rfind(sub);
            if(x+1!=y&&x!=y){
                flag=true;
                break;
            }

        }
       flag==true?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}