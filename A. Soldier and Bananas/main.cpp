#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int k,n,w;
    cin>>k>>n>>w;
    int total = 0;
    for (int i = 1; i <=w ; ++i) {
        total+=k*i;
    }
    if(n-total>0){
        cout<<0<<endl;
    }
    else{
        cout<<total-n<<endl;
    }

    return 0;
}
