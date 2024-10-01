#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
signed main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    cout<<n<<endl;
    }
}