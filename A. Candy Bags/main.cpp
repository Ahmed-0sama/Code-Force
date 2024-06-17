#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
 
signed main() {
    fastread();
    int n;
    cin>>n;
    int i=1;
    int j=n*n;
    while(i<j){
        for (int k = 0; k <n/2 ; ++k) {
            cout<<i<<" "<<j<<" ";
            i++;
            j--;
        }
        cout<<endl;
    }
}