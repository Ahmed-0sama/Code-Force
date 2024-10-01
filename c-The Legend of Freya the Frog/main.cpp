#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

int minMoves(int x, int y, int k) {
    // Calculate required jumps in each direction
    int x_jumps = (x + k - 1) / k; // Equivalent to ceil(x / k)
    int y_jumps = (y + k - 1) / k; // Equivalent to ceil(y / k)

    int total_moves = x_jumps + y_jumps;

    if (total_moves % 2 == 1) {
        total_moves++;
    }

    return total_moves;
}
signed main(){
    fastread();
    int t;cin>>t;
    while(t--){
    int x,y,d;
    cin>>x>>y>>d;
    cout<<minMoves(x,y,d)<<endl;
    }
}