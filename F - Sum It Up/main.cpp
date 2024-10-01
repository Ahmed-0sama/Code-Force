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
vector<vector<int>> all_solutions;
void solve(int i,int current_sum,vector<int>&v,int req,int size){
    if (current_sum == req) {
        all_solutions.push_back(ans);
        return;
    }
    if(current_sum >req||i==size) return;
    for (int j = i; j < size; ++j) {
        if (j > i && v[j] == v[j - 1]) continue;
        ans.push_back(v[j]);
        solve(j + 1, current_sum + v[j], v, req, size);
        ans.pop_back();
    }
}
signed main(){
    fastread();
    int req, size;
    while (cin >> req >> size&&size!=0) {
        vector<int>v(size);
        for (int i = 0; i <size ; ++i) {
            cin>>v[i];
        }
        ans.clear();
        all_solutions.clear();
        sort(v.rbegin(),v.rend());
        solve(0,0,v,req,size);
        cout<<"Sums of "<<req<<":"<<endl;
        if (all_solutions.empty()) {
            cout << "NONE" << endl;
        } else {
            for (const auto& solution : all_solutions) {
                for (int i = 0; i < solution.size(); ++i) {
                    if (i > 0) cout << "+";
                    cout << solution[i];
                }
                cout << endl;
            }
        }
    }
}