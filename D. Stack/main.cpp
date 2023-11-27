#include <iostream>
#include <stack>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int q;
    cin>>q;
    stack<int>s;
    while(q--){
        string x;
        cin>>x;
        if(x=="push"){
            int val;
            cin>>val;
            s.push(val);
        }
        else if(x=="pop"){
            s.pop();
        }
        else if(x=="top"){
            cout<<s.top()<<endl;
        }
    }


    return 0;
}
