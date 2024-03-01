#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<char>s;
    string x;
    cin>>x;
    int sum=0;
    for(int i=0; i<x.size();i++){
        if(x[i]=='('){
            s.push(x[i]);
        }
        else if(x[i]==')'&&!s.empty()){
            s.pop();
            sum+=2;
        }
    }
    cout<<sum<<endl;
    return 0;
}
