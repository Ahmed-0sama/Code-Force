#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
signed main(){
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;cin >> x >> y >> k;
        vector<pair<int,int>>v;
        if(k%2==1){
            v.push_back({x,y});
        }
        for (int i = 1; i <=k/2 ; ++i) {
            v.push_back({x-i,y-i});
        }
        for (int i = 1; i <=k/2 ; ++i) {
            v.push_back({x+i,y+i});
        }
        for (const auto& point : v) {
            cout << point.first << " " << point.second <<endl;
        }
    }

}