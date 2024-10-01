#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <deque>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

signed main() {
    fastread();
    int n;cin>>n;
    deque<int>dq;
    int sereja=0;
    int dima=0;
    bool flag=true;
    for (int i = 0; i <n ; ++i) {
    int x;cin>>x;
    dq.push_back(x);
    }
    for (int i = 0; i <n ; ++i) {
        if(flag){
            flag= false;
            if(dq.front()>dq.back()){
                sereja+=dq.front();
                dq.pop_front();
            }
            else{
                sereja+=dq.back();
                dq.pop_back();
            }
        }
        else{
            flag= true;
            if(dq.front()>dq.back()){
                dima+=dq.front();
                dq.pop_front();
            }
            else{
                dima+=dq.back();
                dq.pop_back();
            }
        }
    }
    cout<<sereja<<" "<<dima<<endl;
}