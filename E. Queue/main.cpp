#include <iostream>
#include <queue>
using namespace std;
int main() {
    int n;
    cin>>n;
    queue<int>q;
    for(int i=0; i<n;i++){
        string x;
        cin>>x;
        if(x=="push"){
            int val=0;
            cin>>val;
            q.push(val);
        }
        else if(x=="pop"){
            q.pop();
        }
        else if(x=="front"){
            cout<<q.front()<<endl;
        }
        else if(x=="back"){
            cout<<q.back()<<endl;
        }
    }

    return 0;
}
