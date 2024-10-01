#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    map<char,int>mp;
    int index=1;
    for (char i = 'a'; i <='z'; ++i) {
        mp[i]=index++;
    }
    for (char i = 'A'; i <='Z'; ++i) {
        mp[i]=index++;
    }
    string s;
    while(cin>>s) {
        int sum = 0;
        for (int i = 0; i < s.length(); ++i) {
            sum += mp[s[i]];
        }
        bool flag = false;
        for (int i = 2; i * i <= sum; ++i) {
            if (sum % i == 0) {
                flag = true;
            }
        }
        flag ? cout << "It is not a prime word." << endl : cout << "It is a prime word." << endl;
    }
}