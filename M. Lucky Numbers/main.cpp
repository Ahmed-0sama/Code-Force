#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    ll a,b;
    cin>>a>>b;
    ll c=0;
    for (int i = a; i <= b; i++) {
        int z=i;
        bool ans= true;
        while(z!=0){
            int x=z%10;
            z=z/10;
            if(x!=4&&x!=7){
                ans=false;
                break;
            }
        }
        if(ans){
            cout<<i<<" ";
            c++;
        }
    }
    if(c==0){
        cout<<-1;
    }

    return 0;
}
