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
signed main() {
    fastread();
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum+=v[i];
    }
    int x;
    cin >> x;
    int count=0;
    int times=x/sum;
    count+=n*times;
    int current_sum = sum * times;
    int i=0;
    while (current_sum<=x){
        current_sum+=v[i];
        i++;
        count++;
    }
    cout<<count<<endl;
}