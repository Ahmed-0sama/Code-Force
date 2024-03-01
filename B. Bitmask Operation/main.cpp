#include <iostream>
using namespace std;
#define intt long long
int main() {
    intt q,n;
    cin>>q>>n;
    for (intt i = 0; i <q ; ++i) {
        intt c;
        cin>>c;
        if(c==1){
            intt x;
            cin>>x;
            cout<<((n>>x)&1)<<endl;
        }
        else if(c==2){
            intt x;
            cin>>x;
            n=n|(1<<x);
            cout<<n<<endl;
        }
        else if(c==3){
            intt x;
            cin>>x;
            n=n&~(1<<x);
            cout<<n<<endl;
        }
        else if(c==4){
            intt x;
            cin>>x;
            n=n^(1<<x);
            cout<<n<<endl;
        }
    }

    return 0;
}
