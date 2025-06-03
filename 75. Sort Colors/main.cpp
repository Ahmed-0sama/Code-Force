#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
void sortColors(vector<int>& nums) {
    for (int j = 0; j <nums.size()-1 ; ++j) {
    for (int i = 0; i <nums.size()-j-1; ++i) {
        if(nums[i]>nums[i+1]){
            int temp=nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=temp;
        }
    }}
}

signed main(){
    fastread();
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sortColors(v);
    for (int i = 0; i <n ; ++i) {
        cout<<v[i]<<' ';
    }
}