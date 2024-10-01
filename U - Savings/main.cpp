#include <iostream>
#include <bits/stdc++.h>
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

signed main(){
    fastread();
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(sum<n){
        sum+=i;

        i++;
    }
    i--;
    cout<<i<<endl;
}