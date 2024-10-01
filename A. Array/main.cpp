#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    int n;
    cin>>n;
    vector<int>pos;
    vector<int>neg;
    vector<int>zero;
    for (int i = 0; i <n ; ++i) {
        int x;
        cin>>x;
        if(x>0){
            pos.push_back(x);
        }
        else if(x<0){
            neg.push_back(x);
        }
        else{
            zero.push_back(x);
        }
    }
    if(neg.size()%2==0){
        int x=neg.back();
        neg.pop_back();
        zero.push_back(x);
    }
    if(pos.empty()){
        if(neg.size()>0){
            int x=neg.back();
            neg.pop_back();
            pos.push_back(x);
        }
        if(neg.size()>0){
            int x=neg.back();
            neg.pop_back();
            pos.push_back(x);
        }
    }
    cout<<neg.size()<<" ";
    for(auto i:neg){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<pos.size()<<" ";
    for(auto i:pos){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<zero.size()<<" ";
    for(auto i:zero){
        cout<<i<<" ";
    }
    cout<<endl;
}