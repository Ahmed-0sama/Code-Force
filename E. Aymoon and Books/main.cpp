#include <iostream>
#include <deque>
#include <queue>
#include <algorithm>

using namespace std;
int main() {
    priority_queue<int>p;
    deque<int>d;
    int n ;
    cin>>n;
    for (int i = 0; i <n ; i++) {
        int x;
        cin>>x;
        d.push_back(x);
    }
    int q,it;
    cin>>q;

    while(q--){
        char l;
        cin>>l;
        if(d.size()){
            if(l=='L')
            {
                if(!d.empty()){
                    int x=d.front();
                    p.push(x);
                    d.pop_front();
                }
            }else if(l=='R')
            {
                if(!d.empty()){
                    int x=d.back();
                    p.push(x);
                    d.pop_back();
                }
            }
        }
        if(l=='Q')
        {
            if(p.empty())cout<<-1<<endl;
            else{
                it=p.top();
                cout<<it<<endl;
                p.pop();
            }
        }
    }
    return 0;
}
