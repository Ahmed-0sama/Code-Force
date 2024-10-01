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
bool isPalindrome(string s){
    for (int i = 0; i <s.length()/2 ; ++i) {
        if(s[i]!=s[s.length()-1-i]){
            return false;
        }
    }
    return true;
}
signed main(){
    fastread();
    string s;
    cin >> s;
   if(isPalindrome(s)) {
       cout << "Yes";
       return 0;
   }
    bool flag = false;
   string s1=s;
   while(s1.length()<s.length()+10) {
       s1 = '0' + s1;
       if (isPalindrome(s1)) {
           flag = true;
           break;
       }
   }
    flag?cout<<"Yes":cout<<"No";
    }