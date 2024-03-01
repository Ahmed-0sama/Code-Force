#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int>v;
    int l=0; int r=0;
    int sum=0;
    int ans=0;
    while(l<n){
        while(r<n&&arr[r]-arr[l]<=5){
            v.push_back(arr[r]);
            r++;
            sum++;
        }
        ans=max(ans,sum);
        l++;
        sum--;
    }
    cout<<ans<<endl;
    return 0;
}
