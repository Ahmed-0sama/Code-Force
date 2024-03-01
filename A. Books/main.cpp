#include <iostream>
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    int p1=0,p2=0;
    int count=0;
    int sum=0;
    int ans=0;
    while(p1<n){
        while(p2<n&&sum+arr[p2]<=m){
            sum+=arr[p2];
            p2++;
            ans= max(ans ,p2-p1);
        }
        count=max(count,ans);
        sum-=arr[p1];
        p1++;
    }
    cout<<count<<endl;
    return 0;
}
