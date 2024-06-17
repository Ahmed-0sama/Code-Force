#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
vector<string> fizzBuzz(int n) {
    vector<string >ans;
    for (int i = 1; i <=n ; ++i) {
        if((i%3==0)&&(i%5==0)){
            ans.push_back("FizzBuzz");
    }
        else if(i%3==0){
            ans.push_back("Fizz");
        }
        else if(i%5==0){
            ans.push_back("Buzz");
        }
        else{
            ans.push_back(to_string(i));
        }
    }
    return ans;
}

signed main() {
    return 0;
}
