#include <iostream>
#include <stack>
using namespace std;
#define endl '\n'
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 int main(){
        fastread();
        char s;
        cin>>s;
        char k=s+1;
        if(s=='z'){
            cout<<'a'<<endl;

        }else {
            cout << k << endl;
        }
     return 0;
 }