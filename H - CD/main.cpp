#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<int>ans;
int max_sum=0;
void solve(vector<int>&v,int req,int size,int i,int temp,vector<int>& current_items) {
    if (i == size) {
        if (temp <= req&&temp>max_sum) {
            max_sum = temp;
            ans = current_items;
        }
        return;
    }
    current_items.push_back(v[i]);
    solve(v, req, size, i + 1, temp + v[i],current_items);
    current_items.pop_back();
    solve(v, req, size, i + 1, temp,current_items);
}
signed main(){
    fastread();
    int req,size;
    while(cin>>req>>size){
        vector<int>v(size);
        for (int i = 0; i <size ; ++i) {
            cin>>v[i];
        }
        max_sum=0;
        ans.clear();
        vector<int>current_items;
        solve(v,req,size,0,0,current_items);
        for (int x:ans) {
            cout<<x<<' ';
        }
        cout<<"sum:"<<max_sum<<endl;
    }

}