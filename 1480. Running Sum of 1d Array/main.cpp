#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

vector<int> runningSum(vector<int>& nums) {
    vector<int> out(nums.size(),0);
    for (int i = 0; i <nums.size(); i++) {
        if(i==0){
            out[i]=nums[i];
            continue;
        }
        out[i]+=nums[i]+out[i-1];
    }
    return out;
}
    signed main() {
    fastread();


}