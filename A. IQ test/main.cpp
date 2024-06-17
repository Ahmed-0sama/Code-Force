#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    int n;
    cin>>n;
    int count_even=0;
    int count_odd=0;
    int pos_even=0;
    int pos_odd=0;
    for (int i = 1; i <=n ; ++i) {
        int x;
        cin>>x;
        if(x%2==0){
            count_even++;
            pos_even=i;
        }
        else{
            count_odd++;
            pos_odd=i;
        }
    }
    if(count_even==1){
        cout<<pos_even<<endl;
    }
    else{
        cout<<pos_odd<<endl;
    }
    return 0;
}
