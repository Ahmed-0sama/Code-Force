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
    cin >> s;
    vector<int>v;
    for (int i = 0; i <s.length() ; i+=2) {
    v.push_back(s[i]-'0');
    }
    sort(v.begin(),v.end());
    for (int i = 0; i <v.size() ; ++i) {
        cout << v[i];
        if(i!=v.size()-1){
            cout << "+";
        }
    }
}