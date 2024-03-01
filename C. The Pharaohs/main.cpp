#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin >>n;
        long long l=1;
        long long r=1e10;
        while (l<=r){
            long long mid=(l+r)/2;
            if(mid==n||mid*(mid+1)/2>=n){
            r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<r+1<<endl;
    }

    return 0;
}
