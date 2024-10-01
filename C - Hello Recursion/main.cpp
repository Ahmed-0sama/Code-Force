#include <iostream>
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
int arraysum(vector<int>&v,int index,int sum){
    if(index==0){
        sum+=v[index];
        return sum;
    }
  else{
      sum+=v[index];
        return (arraysum(v,index-1,sum));
  }
}
signed main(){
    fastread();
    int t;
    cin >> t;
    for (int i = 1; i <=t ; ++i) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int j=0;j<n;j++){
            cin>>v[j];
        }
        int sum=0;
        cout<<"Case "<<i<<": "<<arraysum(v,n-1,sum)<<endl;
    }

}