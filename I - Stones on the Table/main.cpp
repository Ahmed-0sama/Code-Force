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
int n;
cin >> n;
    string s;
    cin >> s;
    int count=0;
    for (int i = 0; i <n-1 ; ++i) {
        if(s[i]==s[i+1]) {
        count++;
        }
    }
    cout << count << endl;
}