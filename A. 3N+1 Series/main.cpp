#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <climits>
#include <algorithm>
#include <stack>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL))
int series(int n,int &count){
    if(n==1) {
        count++;
       return count;
    }
    else if(n%2==0) {
        count++;
        return series(n / 2,count);
    }
    else{
        count++;
    return series(3*n+1,count);
   }
}
signed main() {
    fastread();
    int n;
    cin>>n;
    int count =0;
    cout<<series(n,count);

}