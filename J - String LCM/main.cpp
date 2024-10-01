#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string x;cin>>x;
        string s_lcm = "";
        string t_lcm = "";
        int ans = lcm(s.length(), x.length());
        for (int i = 0; i <ans/s.length() ; ++i) {
            s_lcm+=s;
        }
        for (int i = 0; i <ans/x.length() ; ++i) {
            t_lcm += x;
        }
        if(s_lcm==t_lcm){
            cout<<s_lcm<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}