#include <iostream>
#include <deque>
using namespace std;
int main() {
    int n;
    cin>>n;
    deque<int>dq;
    for(int i=0; i<n;i++){
        string x;
        cin>>x;
        if(x=="push_back"){
            long k;
            cin>>k;
            dq.push_back(k);
        }
        else if(x=="push_front"){
            long k;
            cin>>k;
            dq.push_front(k);

        }
        else if(x=="pop_front"){
            dq.pop_front();

        }
        else if(x=="pop_back"){
         dq.pop_back();

        }
        else if(x=="front"){
            cout<<dq.front()<<endl;

        }
        else if(x=="back"){
            cout<<dq.back()<<endl;
        }
        else if (x=="print"){
            int index;
            cin>>index;
            cout<<dq[index-1]<<endl;
        }
    }
    return 0;
}
