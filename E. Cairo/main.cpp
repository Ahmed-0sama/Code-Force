#include <iostream>
#include <stack>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int wait=1;
        stack<int>s;
        int next_car;
        int n;
        cin>>n;
        bool flag=true;
        for (int i = 0; i <n ; i++) {
            cin>>next_car;
            while(!s.empty()&&s.top()==wait){
                s.pop();
                wait++;
            }
            if(next_car==wait){
                wait++;
            }
            else if(s.empty()||next_car<s.top()){
                s.push(next_car);
            }
            else{
                flag=false;
            }
        }
        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
        }
    return 0;
}
