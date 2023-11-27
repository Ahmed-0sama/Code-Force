#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin>>n;
    priority_queue< int ,vector<int>,less<>>q;
    while(n--){
        string x;
        cin>>x;
        if(x=="push"){
            int s;
            cin>>s;
            q.push(s);
        }
        else if(x=="pop"){
            q.pop();
        }
        else if(x=="top"){
            cout<<q.top()<<endl;
        }
    }
    return 0;
}
