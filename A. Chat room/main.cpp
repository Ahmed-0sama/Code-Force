#include <iostream>
using namespace std;
int main() {
    int count=0;
    string s;
    cin>>s;
    string check="hello";
    for (int i = 0; i <s.length() ; ++i) {
        if(s[i]==check[count]){
            count++;
        }
    }
    if(count==5){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
