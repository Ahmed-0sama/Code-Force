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
        string n;
        cin>>n;
        int sum1=0;
        int sum2=0;
        for (int i = 0; i <3 ; ++i) {
            sum1+=n[i]-'0';
        }
        for (int i = n.length()-1; i>n.length()-4 ; i--) {
            sum2+=n[i]-'0';
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
        

    }

}