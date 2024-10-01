#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main(){
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        if(n%3==0){
            cout<<"Second"<<endl;
        }
        else if(n%3==1){
            cout<<"First"<<endl;
        }
        else if(n%3==2){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;

        }
    }
}