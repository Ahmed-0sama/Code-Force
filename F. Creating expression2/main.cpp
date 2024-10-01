#include <iostream>
#include <vector>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
#define int long long

int find_sol(int x,int n, int sum, int i, const vector<int> &ans) {
    if (i == ans.size()){
        return sum == x ? 1 : 0;
    }
    int add= find_sol(x,n, sum - ans[i], i + 1, ans);
    int sub= find_sol(x,n, sum + ans[i], i + 1, ans);
    return add + sub;
}

signed main() {
    fastread();
    int t, x;
    cin >> t >> x;
    vector<int> v(t);
    for (int i = 0; i < t; i++) {
        cin >> v[i];
    }
    int c = find_sol(x,t, v[0], 1, v);
    cout << c << endl;
    return 0;
}
