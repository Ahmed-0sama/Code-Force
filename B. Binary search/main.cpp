#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <climits>
#include <algorithm>
#include <stack>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int index(int x,vector<int> &a,int l,int r){
    if(l>r){
        return -1;
    }
    int mid=(l+r)/2;
    if(a[mid]==x){
        return mid;
    }
    else if(a[mid]>x){
            return index(x,a,l,mid-1);
        }
        return index(x,a,mid+1,r);
    }

signed main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        int req=index(x,a,0,n-1);
       req==-1?cout<<"-1":cout<<req+1;
        cout << endl;
    }
}