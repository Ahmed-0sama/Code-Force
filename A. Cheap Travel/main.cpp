#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<=b)
        cout<<n*a<<endl;
    else
        cout<<(n/m)*b+min((n%m)*a,b)<<endl;
    return 0;
}
