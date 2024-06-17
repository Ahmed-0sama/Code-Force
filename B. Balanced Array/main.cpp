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
        int n;
        cin>>n;
        int suml=0;
        int sumr=0;
        if(n%4==0){
            cout<<"YES"<<endl;
            for (int i = 2; i <=n; i+=2) {
            sumr += i;
            cout<<i<<" ";
        }
        for (int i = 1; i <n-1; i+=2) {
                suml += i;
                cout<<i<<" ";
            }
        cout<<sumr-suml<<endl;
        }
    else{
        cout<<"NO"<<endl;

    }
    }
    return 0;
}
