#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    map<int,int>m;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
        m[arr[i]]=i+1;
    }
    sort(arr,arr+n);
    for (int i = 0; i <q ; ++i) {
        int x;
        cin>>x;
        long long c=lower_bound(arr,arr+n,x)-arr;
        if(arr[c]==x){
            cout<<"Yes "<<m[arr[c]]<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
