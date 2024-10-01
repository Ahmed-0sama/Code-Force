#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int n;
    cin >> n;
    map<int ,int> mp;
    for(int i = 1; i <= n; i++){
        int c;
        cin >> c;
        mp[c]=i;
    }
    int q;
    cin >> q;
    int left_counter=0;
    int right_counter=0;
    while(q--){
        int x;
        cin >> x;
        int left=mp.find(x)->second;
        int right=n-left+1;
        left_counter+=left;
        right_counter+=right;
    }
        cout << left_counter << " " << right_counter << endl;
}