#include <iostream>
#include <queue>
using namespace std;
int main() {
    int query;
    cin>>query;
    queue<int>q;
    while(query--){
        int guess;
        cin>>guess;
        if(guess==1){
            int id;
            cin>>id;
            q.push(id);
        }
        else if(guess==2){
            int right_guess;
            cin>>right_guess;
            if(right_guess==q.front()){
                cout<<"Yes"<<endl;
                q.pop();
            }
            else{
                cout<<"No"<<endl;
                q.pop();
            }

        }
    }


    return 0;
}
