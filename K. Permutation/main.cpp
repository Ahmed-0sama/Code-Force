#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include <algorithm>
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
void prem(int n, vector<int> &v,int cur,int i) {
    if (i == n) {
        for(int j=0;j<v.size();j++){
            cout << v[j];
            if(j!=v.size()-1) cout<<" ";
        }
        cout << endl;
        return;
    }
    for (int j = 0; j < n; j++) {
        if (cur & (1 << j)) {
            continue;
        }
        v.push_back(j + 1);
        prem(n, v, cur | (1 << j), i + 1);
        v.pop_back();
    }
}
signed main(){
int n;
cin>>n;
vector<int> v;
prem(n,v,0,0);
}