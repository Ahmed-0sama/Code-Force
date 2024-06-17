#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='W'){
                count++;
            }
            if(i>=k&&arr[i-k]=='W'){
                count--;
            }
            if(i>=k-1){
                ans=min(ans,count);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
