#include <iostream>
#include <stack>
#include <map>
using namespace std;
int main() {
    int q;
    cin>>q;
    stack<string>s;
    map<string,int>m;
    for (int i = 0; i <q ; ++i) {

        string x;
        cin>>x;
        s.push(x);
    }
    stack<string>s1;
    for (int i = 0; i <q ; i++) {
        m[s.top()]++;
        if(m[s.top()]==1){
            s1.push(s.top());
        }
        s.pop();
    }
    stack<string>s2;
    while(!s1.empty()){
        string x=s1.top();
        s2.push(x);
        s1.pop();
    }
    while(!s2.empty()){
        cout<<s2.top()<<endl;
        s2.pop();
    }

return 0;
}
