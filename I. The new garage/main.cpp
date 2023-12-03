#include <iostream>
#include <stack>
using namespace std;
int main() {
    int size;
    cin>>size;
    stack<int>s;
    for (int i = size; i >=1 ; i--) {
        s.push(i);
    }
    int sum=0;
    for (int i = 0; i <size ; i++) {
        int x;
        cin>>x;
        if(x==s.top()){
            sum++;
        }
    }
    if(sum==size){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
