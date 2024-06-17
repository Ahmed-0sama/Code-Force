#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int t;
    cin>>t;
    while(t--){
        int a=1;
        int n;
        cin>>n;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                a=n/i;
                break;
            }
        }
        cout<<a<<" "<<n-a<<endl;
    }
    return 0;
}
