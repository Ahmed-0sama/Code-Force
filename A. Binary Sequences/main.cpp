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

void generateBinarySequence(int n,string s){
    if(n==0){
        cout<<s;
        cout<<endl;
    }
    else{
        generateBinarySequence(n-1,s+'0');
        generateBinarySequence(n-1,s+'1');
    }
}
signed main() {
    fastread();
    int t;
    cin >> t;
   while(t--){
       int n;
       cin >> n;
       generateBinarySequence(n, "");
    }
    return 0;
}
