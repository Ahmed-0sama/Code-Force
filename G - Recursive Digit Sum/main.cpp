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
int sum_digit(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
signed main(){
    fastread();
    string s;
    int n;
    cin>>s>>n;
    int sum=0;
    for (int i = 0; i <s.length() ; ++i) {
        sum+= s[i] -'0';
    }
    sum*=n;
    while(sum>9){
        sum=sum_digit(sum);
    }
    cout<<sum;

}