#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
bool isLuckyNumber(int num) {
    string strNum =to_string(num);
    for (char digit : strNum) {
        if (digit != '4' && digit != '7') {
            return false;
        }
    }
    return true;
}


signed  main(){
    fastread();
    int l,r;
    cin>>l>>r;
    cout<<sumOfNextLuckyNumbers(l,r)<<endl;
}