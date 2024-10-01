#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1e6+1;
int se[N];
int inv[N];
int gcd(int a,int b){
    if(b==0)return a;

    return gcd(b,a%b);
}
void build(){
    for (int i = 1; i <N ; ++i) {
        for (int j = i; j <N ;j+=i) {
        se[i]++;
        }
    }
}

signed main(){
    fastread();

    int t;cin>>t;
    while(t--){
        int g;cin>>g;
       cout<<g/2<<endl;
    }
}