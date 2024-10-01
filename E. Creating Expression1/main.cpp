#include <iostream>
#include <vector>
using namespace std;
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

bool check(int sum,int index,vector<int>&v,int size,int result){
    if(index==size){
        return sum==result;
    }
    return check(sum+v[index],index+1,v,size,result) || check(sum-v[index],index+1,v,size,result);
}

signed main() {
    fastread();
    int size,result;
    cin >> size >> result;
    vector<int>v(size);
    for (int i = 0; i < size; ++i) {
        cin >> v[i];
    }
    cout << (check(v[0],1,v,size,result) ? "YES" : "NO") << endl;
    return 0;
}
