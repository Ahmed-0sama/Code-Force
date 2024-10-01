#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <iomanip>
#include <set>
#include <cmath>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
signed main(){
    fastread();
    int xa,ya,xb,yb;
    cin>>xa>>ya>>xb>>yb;
    int q;
    cin>>q;
    vector<vector<int>>v(q,vector<int>(3,0));
    for (int i = 0; i <q ; ++i) {
        cin>>v[i][0]>>v[i][1]>>v[i][2];
    }
    int count = 0;
    int x1 = min(xa, xb), x2 = max(xa, xb);
    int y1 = min(ya, yb), y2 = max(ya, yb);
    for (int i = x1; i <= x2; ++i) {
        for (int j : {y1, y2}) {
            bool inside_heating_range = false;
            for (int k = 0; k < q; ++k) {
                if ((i - v[k][0]) * (i - v[k][0]) + (j - v[k][1]) * (j - v[k][1]) <= v[k][2] * v[k][2]) {
                    inside_heating_range = true;
                    break;
                }
            }
            if (!inside_heating_range) {
                count++;
            }
        }
    }

    for (int j = y1 + 1; j < y2; ++j) {
        for (int i : {x1, x2}) {
            bool inside_heating_range = false;
            for (int k = 0; k < q; ++k) {
                if ((i - v[k][0]) * (i - v[k][0]) + (j - v[k][1]) * (j - v[k][1]) <= v[k][2] * v[k][2]) {
                    inside_heating_range = true;
                    break;
                }
            }
            if (!inside_heating_range) {
                count++;
            }
        }
    }
    cout<<count<<endl;

}