#include <iostream>
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

signed main(){
    fastread();
    string s;
    int n;
    cin>>s>>n;
    int sum=0;
    for (int i = 0; i <s.size() ; ++i) {
       sum+=s[0]-'0';
    }
    sum*=n;
    cout<<sum;

}