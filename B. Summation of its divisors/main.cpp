#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <climits>
#include <algorithm>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL))

signed main(){
    fastread();
    int t;
    cin >> t;
    int sum=0;
    for (int i = 1; i * i <= t; ++i){
        if(t%i==0){
            sum+=i;
            if (i != t / i) {
                sum += t / i;
            }
        }
    }
    cout<<sum<<endl;
}