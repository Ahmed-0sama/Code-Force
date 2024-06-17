#include <iostream>
#include <stack>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int t;
    cin>>t;
    while(t--){
    int a, b,c;
    cin>>a>>b>>c;
    if(a<b&&b<c){
        cout<<"STAIR"<<endl;
    }
    else if(b>a&&b>c){
        cout<<"PEAK"<<endl;
    }
    else{
        cout<<"NONE"<<endl;
    }
    }
    return 0;
}
