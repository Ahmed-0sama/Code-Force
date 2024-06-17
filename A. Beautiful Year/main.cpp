#include <iostream>
#include <stack>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
fastread();
int n;
cin>>n;
while(true){
    n++;
    int a=n%10;
    int b=(n/10)%10;
    int c=(n/100)%10;
    int d=(n/1000)%10;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        cout<<n<<endl;
        break;
    }

}
    return 0;
}
