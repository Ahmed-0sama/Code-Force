#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int fast_pow(int base, int power) {
    if (power == 0) return 1;

    int res = fast_pow(base, power / 2);
    res *= res;

    if (power % 2 != 0) {
        res *= base;  // Multiply by base if the power is odd
    }

    return res%100;
}
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
signed main(){
    int a,b;cin>>a>>b;
    int g=gcd(a,b);
    vector<int>v;
    for (int i = 1; i*i <=g ; ++i) {
        if(g%i==0){
            v.push_back(i);
            if(g/i!=i)v.push_back(g/i);
        }
    }
    sort(v.begin(),v.end());
    int t;cin>>t;
    while(t--){
        int low,high;cin>>low>>high;
        auto it= upper_bound(v.begin(),v.end(),high);
        if(it!=v.begin() and *(--it)>=low){
            cout<<*it<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}