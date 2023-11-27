#include <iostream>
#include <string>
using namespace std;
int main (){
    int size;
    cin>>size;
    for(int i=0; i<size;i++){
        string s;
        cin>>s;
        string sub="010";
        string sub2="101";
        if(s.find(sub)!=string::npos || s.find(sub2)!=string::npos){
            cout<<"Good\n";
        }
        else{
            cout<<"Bad\n";
        }
   
    }
    return 0;
}
