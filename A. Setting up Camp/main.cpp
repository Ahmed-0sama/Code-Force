#include <iostream>
#define ll long long
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        int count=0;
        int d =b%3;
        int m =  (b+c+2)/3;
        if((d+c>=3)|| d==0){
            count=a+m;
            cout<<count<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}
