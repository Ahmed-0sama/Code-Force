#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int count =0;
    int c1=0;
    int c0=0;
    for(char i : s){
        if(i=='1'){
            c1++;
            c0=0;
            if(c1>=7){
                count++;
            }
        }
        else if(i=='0'){
            c0++;
            c1=0;
            if(c0>=7){
                count++;
            }
        }
    }
    if(count >0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
