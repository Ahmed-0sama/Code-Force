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
    vector <vector<char>>a = vector<vector<char>>(n,vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <n ; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <n-1 ; ++i) {
        for (int j = 1; j <n-1 ; ++j) {
            if(a[i][j]=='#'&&a[i][j-1]=='#'&&a[i][j+1]=='#'&&a[i-1][j]=='#'&&a[i+1][j]=='#'){
                a[i][j]='.';
                a[i][j-1]='.';
                a[i][j+1]='.';
                a[i-1][j]='.';
                a[i+1][j]='.';
            }
        }
    }
    int count =0;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n ; ++j) {
            if(a[i][j]=='#'){
                count++;
            }
        }
    }
    count>0?cout<<"NO":cout<<"YES";
}