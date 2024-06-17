#include <iostream>
#include <stack>
using namespace std;
int main() {
    string x;
    cin>>x;
    stack<char>s;
    for(int i=0; i<x.length();i++){
        if(x[i]=='('){
            s.push(i);
        }
        else if(x[i]==')'){
            if(s.empty()){
                cout<<"NO";
                break;
            }
            s.pop();
        }
        if(i==x.length()-1){
            if(s.empty()){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
    }

    return 0;
}
