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
    int n;
    cin >> n;
   if(n%2==0){
        cout<<n/2<<endl;
   }
   else{
       cout<<-((n+1)/2)<<endl;
   }
}