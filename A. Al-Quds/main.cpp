#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main (){
    fastread();
    int n, v;
    cin >> n >> v;
    vector<int> time(n);
    vector<int> distance(n);
    for (int i = 0; i < n; ++i) {
        cin >> time[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> distance[i];
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        double timeobject = static_cast<double>(distance[i]) / v;
        if (time[i] >= timeobject) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}