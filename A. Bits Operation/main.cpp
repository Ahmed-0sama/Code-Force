#include <iostream>
#define intt long long
using namespace std;
int main() {

    intt q,n;
    cin>>q>>n;
    for (intt i = 0; i <q ; ++i) {
        intt x;
        cin>>x;
        if(x==1){
            intt z;
            cin>>z;
            n=n|z;
            cout<<n<<endl;
        }
        else if(x==2){
            intt z;
            cin>>z;
            n=n&z;
            cout<<n<<endl;
        }
        else if(x==3){
            intt z;
            cin>>z;
            n=n^z;
            cout<<n<<endl;
        }
        else if (x == 4) {
           n = ~n;
            cout <<n << endl;
        }
    }
    return 0;
}
