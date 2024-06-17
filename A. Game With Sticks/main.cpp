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
    int r,c;
    cin>>r>>c;
    ((min(r,c)%2)==0)?cout<<"Malvika":cout<<"Akshat";
}