#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n;
    cin>>n;
    vector<char>arr(n);
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    int start=INT_MAX;
    int l=0;
    int r=0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != '.' && start == INT_MAX) {
            start = i + 1;
        }
        if(arr[i]=='R'){
            r++;
        }
        else if(arr[i]=='L'){
           l++;
        }
    }
    if(r>0&&l==0){
        cout<<start<<" "<<start+r<<endl;
    }
    else if(l>0&&r==0){
        cout<<start+l-1<<" "<<start-1<<endl;
    }
   else{
        auto it = find(arr.begin(), arr.end(), 'L');
        cout<<start<<" "<<distance(arr.begin(), it)<<endl;

   }
}