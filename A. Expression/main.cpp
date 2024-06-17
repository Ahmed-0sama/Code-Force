#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    int a,b,c;
    cin>>a>>b>>c;
    int ass1= a+b+c;
    int ass2=a+b*c;
    int ass3=a*(b+c);
    int ass4=(a+b)*c;
    int ass5=a*b*c;
    int ans=max(ass1,max(ass2,max(ass3,max(ass4,ass5))));
    cout<<ans<<endl;
    return 0;
}
