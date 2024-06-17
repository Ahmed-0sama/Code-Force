#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int maximumWealth(vector<vector<int>>& accounts) {
    int max=0;
    for(int i=0; i<accounts.size();i++){
        int sum=0;
        for(int j=0; j<accounts[i].size();j++){
            sum+=accounts[i][j];
        }
        if(sum>max){
            max=sum;
        }
    }
    return max;

}
signed main() {

}
