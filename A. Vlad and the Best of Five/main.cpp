#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        int a=0;
        int b=0;
        for(int i=0; i<5;i++){
            if(x[i]=='A'){
                a++;
            }
            else{
                b++;
            }
        }
        if(a>b){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
    return 0;
}
